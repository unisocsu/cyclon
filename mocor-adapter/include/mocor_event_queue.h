#ifndef MOCOR_EVENT_QUEUE_H
#define MOCOR_EVENT_QUEUE_H

#include "mocor_canvas.h"

#ifdef __cplusplus
extern "C" {
#endif

#define MOCOR_EVENT_QUEUE_CAPACITY 32

typedef struct {
    MocorEvent items[MOCOR_EVENT_QUEUE_CAPACITY];
    size_t head;
    size_t count;
} MocorEventQueue;

void mocor_event_queue_init(MocorEventQueue *queue);
int mocor_event_queue_push(MocorEventQueue *queue, int type, int32_t value);
int mocor_event_queue_pop(MocorEventQueue *queue, MocorEvent *event);
int mocor_event_dispatch(MocorEventQueue *queue,
                         MocorEventHandler handler, void *context);

#ifdef __cplusplus
}
#endif

#endif
