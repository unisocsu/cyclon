#include "mocor_canvas.h"

#include <stddef.h>

static int clip_start(int value, int limit) {
    if (value < 0) return 0;
    if (value > limit) return limit;
    return value;
}

int mocor_canvas_init(MocorCanvas *canvas, int width, int height,
                      uint16_t *pixels, MocorPresentFn present,
                      void *present_context) {
    if (!canvas || width <= 0 || height <= 0 || !pixels) {
        return 0;
    }

    canvas->width = width;
    canvas->height = height;
    canvas->pixels = pixels;
    canvas->present = present;
    canvas->present_context = present_context;
    return 1;
}

void mocor_canvas_fill_rect(MocorCanvas *canvas, int x, int y, int width,
                            int height, uint16_t rgb565) {
    int x0, y0, x1, y1;
    int row;

    if (!canvas || !canvas->pixels || width <= 0 || height <= 0) {
        return;
    }

    x0 = clip_start(x, canvas->width);
    y0 = clip_start(y, canvas->height);
    x1 = clip_start(x + width, canvas->width);
    y1 = clip_start(y + height, canvas->height);

    if (x1 <= x0 || y1 <= y0) {
        return;
    }

    for (row = y0; row < y1; ++row) {
        int col;
        uint16_t *dst = canvas->pixels + row * canvas->width + x0;
        for (col = x0; col < x1; ++col) {
            *dst++ = rgb565;
        }
    }
}

void mocor_canvas_present(MocorCanvas *canvas) {
    if (canvas && canvas->present) {
        canvas->present(canvas, canvas->present_context);
    }
}

uint16_t mocor_rgb565(uint8_t r, uint8_t g, uint8_t b) {
    return (uint16_t)(((uint16_t)(r & 0xf8) << 8) |
                      ((uint16_t)(g & 0xfc) << 3) |
                      ((uint16_t)b >> 3));
}
