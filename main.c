#include <stdio.h>
#include "queue.h"

void print_queue(queue* q, int queue_top)
{
    printf("FRONT +    +\n"); 
    for (int i = 0; i < queue_top + 1; i++)
        printf("      | %d |\n", q->queue[i]);
    printf("BACK  +    +\n");  
}

int main()
{
    queue myqueue;
    queue_init(&myqueue);

    printf("%d\n", queue_dequeue(&myqueue));

    printf("%d\n", queue_enqueue(&myqueue, 10));
    printf("%d\n", queue_enqueue(&myqueue, 15));
    printf("%d\n", queue_enqueue(&myqueue, 20));
    printf("%d\n", queue_enqueue(&myqueue, 25));
    printf("%d\n", queue_enqueue(&myqueue, 30));
    printf("%d\n", queue_enqueue(&myqueue, 35));

    print_queue(&myqueue, myqueue.top);

    printf("%d\n", queue_dequeue(&myqueue));

    print_queue(&myqueue, myqueue.top);

    return 0;
}