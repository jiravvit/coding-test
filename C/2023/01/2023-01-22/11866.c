#include <stdio.h>

struct Queue{
    int data[1000];
    int rear, front;
};

void push(struct Queue* queue, int data) {
    queue->data[queue->rear++ % 1000] = data;
}

int pop(struct Queue* queue) {
    int data = queue->data[queue->front++ % 1000];
    return data;
}

int n, k;

int main() {
    scanf("%d %d", &n, &k);    

    // initialize
    struct Queue queue;
    queue.front = 0;
    queue.rear = 0;

    for (int i = 0; i < n; i++) {
        push(&queue, i+1);
    }

    //
    printf("<");

    while(queue.rear - queue.front != 0) {
        for (int i = 0; i < k-1; i++) {
            push(&queue, pop(&queue)); 
        }
        if (queue.rear - queue.front != 1) {
            printf("%d, ", pop(&queue));
        } else {
            printf("%d>\n", pop(&queue));
        }
    }


}
