#include <stdio.h>
#include <string.h>

int n;
char cmd[12];
int deque[100001];
int sp;

void push_front(int x) {
    for (int i = sp; i >= 0; i--) {
        deque[i+1] = deque[i];
    }
    deque[0] = x;
    sp++;
}

void push_back(int x) {
    deque[sp++] = x;
}

void pop_front() {
    if (sp) {
        printf("%d\n", deque[0]);

        for (int i = 0; i < sp; i++) {
            deque[i] = deque[i+1];
        }

        deque[sp] = 0;
        sp--;
    } else {
        printf("-1\n");
    }
}

void pop_back() {
    if (sp) {
        printf("%d\n", deque[sp-1]);
        deque[sp-1] = 0;
        sp--;
    } else {
        printf("-1\n");
    }
}

void size() {
    printf("%d\n", sp);
}

void empty() {
    if (sp) printf("0\n");
    else printf("1\n");
}

void front() {
    if (sp) printf("%d\n", deque[0]);
    else printf("-1\n");
}

void back() {
    if (sp) printf("%d\n", deque[sp-1]);
    else printf("-1\n");
}

int main() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", cmd);

        if (!strcmp(cmd, "push_front")) {
            int x = 0;
            scanf("%d", &x);
            push_front(x);
        } else if (!strcmp(cmd, "push_back")) {
            int x = 0;
            scanf("%d", &x);
            push_back(x);
        } else if (!strcmp(cmd, "pop_front")) pop_front();
        else if (!strcmp(cmd, "pop_back")) pop_back();
        else if (!strcmp(cmd, "size")) size();
        else if (!strcmp(cmd, "empty")) empty();
        else if (!strcmp(cmd, "front")) front();
        else if (!strcmp(cmd, "back")) back();
    }
}