#include <stdio.h>

// code 0-15

#define QUEUE_CAPACITY  8
#define NULL    0

void* queue[QUEUE_CAPACITY];
int head = 0;
int tail = -1;
int queue_size = 0;

void enqueuep(void* p)
{
    if (queue_size == QUEUE_CAPACITY) {
        printf("queue full!\n");
        return;
    }

    tail = (tail + 1) % QUEUE_CAPACITY;
    queue_size++;
    queue[tail] = p;
}

void* dequeuep()
{
    void* r;

    if (queue_size == 0) {
        printf("queue empty\n");
        return NULL;
    }

    r = queue[head];
    head = (head + 1) % QUEUE_CAPACITY;
    queue_size--;

    return r;
}

