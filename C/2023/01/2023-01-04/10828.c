#include <stdio.h>
#include <string.h>

int n; 
char cmd[10];
int stack[1000001];
int sp;

void push(int n) {
    stack[sp++] = n;
}

void pop() {
    if (sp) printf("%d\n", stack[--sp]);
    else printf("-1\n");
}

void top() {
    if (sp) printf("%d\n", stack[sp-1]);
    else printf("-1\n");
}

void size() {
    printf("%d\n", sp);
}

void empty() {
    if (sp) printf("0\n");
    else printf("1\n");
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", cmd);
        
        if (!strcmp(cmd, "push")) {
            int n;
            scanf("%d", &n);
            push(n);
        } else if (!strcmp(cmd, "pop")) {
            pop();
        } else if (!strcmp(cmd, "top")) {
            top();
        } else if (!strcmp(cmd, "size")) {
            size();
        } else if (!strcmp(cmd, "empty")) {
            empty();
        }

    }
}
