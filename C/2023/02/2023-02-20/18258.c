#include <stdio.h>
#include <string.h>
#define MAX 5000000

int n;
char cmd[10];
int queue[MAX];
int front = -1;
int rear = -1;

int IsFull() {
    int tmp = (rear+1) % MAX;
    if (tmp == front) return 1;
    else return 0;
}

int IsEmpty() {
    if (front == rear) return 1;
    else return 0;
}

void push(int value) {
    if (!IsFull()) {
        rear = (rear+1) % MAX;
        queue[rear] = value;
    }
}

int pop() {
    if (!IsEmpty()) {
        front = (front+1) % MAX;
        return queue[front];
    } else return -1;
}

int print_front() {
    if (!IsEmpty()) return queue[front+1];
    else return -1;
}

int print_back() {
    if (!IsEmpty()) return queue[rear];
    else return -1;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", cmd);
        if (!strcmp("push", cmd)) {
            int num = 0;
            scanf("%d", &num);
            push(num);
        } else if (!strcmp("pop", cmd)) {
            printf("%d\n", pop());
        } else if (!strcmp("size", cmd)) {
            printf("%d\n", rear - front);
        } else if (!strcmp("empty", cmd)) {
            printf("%d\n", IsEmpty());
        } else if (!strcmp("front", cmd)) {
            printf("%d\n", print_front());
        } else if (!strcmp("back", cmd)) {
            printf("%d\n", print_back());
        } 
    }
}
