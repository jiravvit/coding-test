#include <stdio.h>

int n;
int stack[1000001];
int sp;

// push, pop
void push(int n) {
    stack[sp++] = n;
}

void pop() {
    if (sp) stack[--sp] = 0;
} 

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int a = 0;
        scanf("%d", &a);
        if (a == 0) pop();
        else push(a);
    }

    int sum = 0;
    for (int i = 0; stack[i] != 0; i++) {
        sum += stack[i];
    }
    printf("%d\n", sum);
}
