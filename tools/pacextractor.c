#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdint.h>
#include <sys/stat.h>

#ifdef _WIN32
#include <io.h>
#endif

typedef struct {
    int16_t someField[24];
    int32_t someInt;
    int16_t productName[256];
    int16_t firmwareName[256];
    int32_t partitionCount;
    int32_t partitionsListStart;
    int32_t someIntFields1[5];
    int16_t productName2[50];
    int16_t someIntFields2[6];
    int16_t someIntFields3[2];
} PacHeader;

typedef struct {
    uint32_t length;
    int16_t partitionName[256];
    int16_t fileName[512];
    uint32_t partitionSize;
    int32_t someFileds1[2];
    uint32_t partitionAddrInPac;
    int32_t someFileds2[3];
    int32_t dataArray[];
} PartitionHeader;

static void getString(const int16_t *baseString, char *resString, size_t capacity) {
    size_t length = 0;
    if (!baseString || !resString || capacity == 0) return;

    while (length + 1 < capacity && baseString[length] != 0) {
        resString[length] = (char)(baseString[length] & 0xff);
        ++length;
    }
    resString[length] = 0;
}

static int read_full(int fd, void *buf, size_t size) {
    size_t done = 0;
    while (done < size) {
        ssize_t n = read(fd, (char *)buf + done, size - done);
        if (n <= 0) return 0;
        done += (size_t)n;
    }
    return 1;
}

static int seek_abs(int fd, uint32_t pos) {
    return lseek(fd, (off_t)pos, SEEK_SET) >= 0;
}

int main(int argc, char **argv) {
    if (argc < 2) {
        fprintf(stderr, "Usage: pacextractor <firmware.pac>\n");
        return EXIT_FAILURE;
    }

#ifdef _WIN32
    int fd = open(argv[1], O_RDONLY | O_BINARY);
#else
    int fd = open(argv[1], O_RDONLY);
#endif
    if (fd < 0) {
        perror("open PAC");
        return EXIT_FAILURE;
    }

    struct stat st;
    if (fstat(fd, &st) != 0) {
        perror("fstat");
        close(fd);
        return EXIT_FAILURE;
    }

    if ((uint64_t)st.st_size < sizeof(PacHeader)) {
        fprintf(stderr, "File is too small to be a PAC file\n");
        close(fd);
        return EXIT_FAILURE;
    }

    PacHeader pacHeader;
    if (!read_full(fd, &pacHeader, sizeof(pacHeader))) {
        fprintf(stderr, "Error while parsing PAC header\n");
        close(fd);
        return EXIT_FAILURE;
    }

    char name[256];
    char fileName[256];
    unsigned char ioBuffer[64 * 1024];

    getString(pacHeader.firmwareName, name, sizeof(name));
    printf("Firmware name: %s\n", name);
    printf("Partition count: %d\n", pacHeader.partitionCount);

    if (pacHeader.partitionCount <= 0 || pacHeader.partitionCount > 512) {
        fprintf(stderr, "Invalid partition count: %d\n", pacHeader.partitionCount);
        close(fd);
        return EXIT_FAILURE;
    }

    uint32_t curPos = (uint32_t)pacHeader.partitionsListStart;
    PartitionHeader **partHeaders =
        calloc((size_t)pacHeader.partitionCount, sizeof(*partHeaders));
    if (!partHeaders) {
        perror("calloc");
        close(fd);
        return EXIT_FAILURE;
    }

    int i;
    for (i = 0; i < pacHeader.partitionCount; ++i) {
        if (!seek_abs(fd, curPos)) {
            fprintf(stderr, "Partition header seek error\n");
            free(partHeaders);
            close(fd);
            return EXIT_FAILURE;
        }

        uint32_t length;
        if (!read_full(fd, &length, sizeof(length)) ||
            length < sizeof(PartitionHeader) ||
            length > 1024 * 1024) {
            fprintf(stderr, "Invalid partition header length at index %d\n", i);
            free(partHeaders);
            close(fd);
            return EXIT_FAILURE;
        }

        partHeaders[i] = malloc(length);
        if (!partHeaders[i]) {
            perror("malloc");
            free(partHeaders);
            close(fd);
            return EXIT_FAILURE;
        }

        if (!seek_abs(fd, curPos) ||
            !read_full(fd, partHeaders[i], length)) {
            fprintf(stderr, "Partition header error at index %d\n", i);
            free(partHeaders[i]);
            free(partHeaders);
            close(fd);
            return EXIT_FAILURE;
        }

        curPos += length;

        getString(partHeaders[i]->partitionName, name, sizeof(name));
        getString(partHeaders[i]->fileName, fileName, sizeof(fileName));
        printf("Partition name: %s\n\twith file name: %s\n\twith size %u\n",
               name, fileName, partHeaders[i]->partitionSize);
    }

    for (i = 0; i < pacHeader.partitionCount; ++i) {
        PartitionHeader *part = partHeaders[i];
        if (!part) continue;

        if (part->partitionSize == 0) {
            free(part);
            continue;
        }

        if (!seek_abs(fd, part->partitionAddrInPac)) {
            fprintf(stderr, "Partition image seek error for partition %d\n", i);
            free(part);
            continue;
        }

        getString(part->fileName, fileName, sizeof(fileName));
        if (fileName[0] == 0) {
            snprintf(fileName, sizeof(fileName), "partition_%d.bin", i);
        }

        printf("Extract %s\n", fileName);

#ifdef _WIN32
        int fd_new = open(fileName, O_WRONLY | O_CREAT | O_TRUNC | O_BINARY, 0666);
#else
        int fd_new = open(fileName, O_WRONLY | O_CREAT | O_TRUNC, 0666);
#endif
        if (fd_new < 0) {
            perror("open output");
            free(part);
            continue;
        }

        uint32_t dataSizeLeft = part->partitionSize;
        int failed = 0;

        while (dataSizeLeft > 0) {
            uint32_t copyLength =
                dataSizeLeft > sizeof(ioBuffer) ? (uint32_t)sizeof(ioBuffer) : dataSizeLeft;

            if (!read_full(fd, ioBuffer, copyLength)) {
                fprintf(stderr, "Partition image extraction error at %s: %s\n",
                        fileName, strerror(errno));
                failed = 1;
                break;
            }

            size_t written = 0;
            while (written < copyLength) {
                ssize_t n = write(fd_new, ioBuffer + written, copyLength - written);
                if (n <= 0) {
                    perror("write");
                    failed = 1;
                    break;
                }
                written += (size_t)n;
            }

            if (failed) break;

            dataSizeLeft -= copyLength;
            printf("\r\t%02u%%",
                   (unsigned)((100ULL * (part->partitionSize - dataSizeLeft)) /
                              part->partitionSize));
            fflush(stdout);
        }

        printf("\n");
        close(fd_new);

        if (failed) {
            remove(fileName);
            free(part);
            free(partHeaders);
            close(fd);
            return EXIT_FAILURE;
        }

        free(part);
    }

    free(partHeaders);
    close(fd);
    return EXIT_SUCCESS;
}
