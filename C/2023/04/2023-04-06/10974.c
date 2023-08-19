#include <stdio.h>
#include <stdbool.h>

int n;
int arr[10];
bool visit[10];

void func(int x) {
    if (x > n) {
        for (int i = 1; i <= n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        for (int i = 1; i <= n; i++) {
            if (visit[i] == false) {
                visit[i] = true;
                arr[x] = i;
                func(x+1);
                visit[i] = false;
            }
        }
    }
}

int main() {
    scanf("%d", &n);
    func(1);
}
