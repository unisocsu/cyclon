#include "mocor_canvas.h"
#include "mocor_event_queue.h"

#include <assert.h>
#include <stdio.h>
#include <stdint.h>

static int presented;
static int received;

static void present(const MocorCanvas *canvas, void *context) {
    (void)context;
    assert(canvas != NULL);
    presented++;
}

static int handle_event(const MocorEvent *event, void *context) {
    (void)context;
    assert(event != NULL);
    received++;
    return 1;
}

int main(void) {
    uint16_t pixels[160 * 120] = {0};
    MocorCanvas canvas;
    MocorEventQueue queue;
    uint16_t red = mocor_rgb565(255, 0, 0);

    assert(mocor_canvas_init(&canvas, 160, 120, pixels, present, NULL));
    mocor_canvas_fill_rect(&canvas, 10, 20, 20, 10, red);

    assert(pixels[20 * 160 + 10] == red);
    assert(pixels[29 * 160 + 29] == red);
    assert(pixels[19 * 160 + 10] == 0);
    assert(pixels[20 * 160 + 30] == 0);

    mocor_canvas_present(&canvas);
    assert(presented == 1);

    mocor_event_queue_init(&queue);
    assert(mocor_event_queue_push(&queue, 1, 0x1234));
    assert(mocor_event_queue_push(&queue, 2, 0x5678));
    assert(mocor_event_dispatch(&queue, handle_event, NULL) == 2);
    assert(received == 2);

    puts("mocor-adapter: PASS");
    return 0;
}
