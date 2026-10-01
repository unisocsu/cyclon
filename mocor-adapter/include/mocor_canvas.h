#ifndef MOCOR_CANVAS_H
#define MOCOR_CANVAS_H

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MocorCanvas MocorCanvas;

typedef void (*MocorPresentFn)(const MocorCanvas *canvas, void *context);

typedef struct {
    int type;
    int32_t value;
} MocorEvent;

typedef int (*MocorEventHandler)(const MocorEvent *event, void *context);

struct MocorCanvas {
    int width;
    int height;
    uint16_t *pixels;
    MocorPresentFn present;
    void *present_context;
};

int mocor_canvas_init(MocorCanvas *canvas, int width, int height,
                      uint16_t *pixels, MocorPresentFn present,
                      void *present_context);

void mocor_canvas_fill_rect(MocorCanvas *canvas, int x, int y, int width,
                            int height, uint16_t rgb565);

void mocor_canvas_present(MocorCanvas *canvas);

uint16_t mocor_rgb565(uint8_t r, uint8_t g, uint8_t b);

#ifdef __cplusplus
}
#endif

#endif
