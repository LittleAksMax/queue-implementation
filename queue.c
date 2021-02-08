#include "queue.h"

#define TRUE 1
#define FALSE 0

void queue_init(queue* q)
{
    q->top = -1;
    for (int i = 0; i < QUEUE_LENGTH; i++)
        q->queue[i] = DEFAULT;
}

int queue_enqueue(queue* q, int value)
{
    if (q->top == QUEUE_LENGTH - 1) return FALSE;
    q->queue[++q->top] = value;
    return TRUE;
}

int queue_dequeue(queue* q)
{
    if (q->top == -1) return FALSE;
    for (int i = 1; i <= q->top; i++)
        q->queue[i - 1] = q->queue[i];
    q->queue[q->top--] = DEFAULT;
    return TRUE;
}