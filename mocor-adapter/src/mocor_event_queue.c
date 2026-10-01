#include "mocor_canvas.h"

#include <stddef.h>

#define MOCOR_EVENT_QUEUE_CAPACITY 32

typedef struct {
    MocorEvent items[MOCOR_EVENT_QUEUE_CAPACITY];
    size_t head;
    size_t count;
} MocorEventQueue;

void mocor_event_queue_init(MocorEventQueue *queue) {
    if (!queue) return;
    queue->head = 0;
    queue->count = 0;
}

int mocor_event_queue_push(MocorEventQueue *queue, int type, int32_t value) {
    size_t index;

    if (!queue || queue->count >= MOCOR_EVENT_QUEUE_CAPACITY) {
        return 0;
    }

    index = (queue->head + queue->count) % MOCOR_EVENT_QUEUE_CAPACITY;
    queue->items[index].type = type;
    queue->items[index].value = value;
    queue->count++;
    return 1;
}

int mocor_event_queue_pop(MocorEventQueue *queue, MocorEvent *event) {
    if (!queue || !event || queue->count == 0) {
        return 0;
    }

    *event = queue->items[queue->head];
    queue->head = (queue->head + 1) % MOCOR_EVENT_QUEUE_CAPACITY;
    queue->count--;
    return 1;
}

int mocor_event_dispatch(MocorEventQueue *queue,
                         MocorEventHandler handler, void *context) {
    MocorEvent event;
    int dispatched = 0;

    if (!queue || !handler) return 0;

    while (mocor_event_queue_pop(queue, &event)) {
        if (!handler(&event, context)) {
            break;
        }
        dispatched++;
    }

    return dispatched;
}
