#include <stdio.h>

struct Queue{
    int data[500000];
    int rear, front;
};

void push(struct Queue* queue, int data) {
    queue->data[queue->rear++ % 500000] = data;
}

int pop(struct Queue* queue) {
    int data = queue->data[queue->front++ % 500000];
    return data;
}

int n;

int main() {
    scanf("%d", &n);

    if (n == 1) {
        printf("1\n");
    }

    // init
    struct Queue queue;
    queue.front = 0;
    queue.rear = 0;

    for (int i = 0; i < n; i++) {
        push(&queue, i+1);
    }

    while(queue.rear - queue.front != 0) {
        pop(&queue);
        push(&queue, pop(&queue));
        if (queue.rear - queue.front == 1) {
            printf("%d\n", pop(&queue));
        } 
    }
}