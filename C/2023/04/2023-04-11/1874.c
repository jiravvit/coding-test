#include <stdio.h>
#include <stdlib.h>

int num;

int main() {
    scanf("%d", &num);
    
    int top = -1;
    int n = 1;

    int stack_size = sizeof(int) * num;
    int *stack = (int*)malloc(stack_size);
    int *arr = (int*)malloc(stack_size);

    for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }
    
    int idx = 0;

    char result[num*2];
    int result_idx = 0;

    while(1) {
        if (top == -1 || stack[top] < arr[idx]) {
            stack[++top] = n++;
            result[result_idx++] = '+';
        } else if (stack[top] == arr[idx]) {
            top--;
            idx++;
            result[result_idx++] = '-';
        } else {
            printf("NO\n");
            return 0;
        }

        if (idx == num) break;
    }

    for (int i = 0; i < result_idx; i++) {
        printf("%c\n", result[i]);
    }

}
