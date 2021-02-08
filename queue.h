#define QUEUE_LENGTH 5
#define DEFAULT (-2147483647 - 1) // INT_MIN

typedef struct {
    int queue[QUEUE_LENGTH]; // the queue itself
    int top; // index of element furthest back, -1 if empty
    // don't need length as length is top + 1
} queue;

// initialize array (top = -1 and fill array with DEFAULT)
void queue_init(queue*);

// push onto end of queue
int queue_enqueue(queue*, int);

// pop front of queue
int queue_dequeue(queue*);