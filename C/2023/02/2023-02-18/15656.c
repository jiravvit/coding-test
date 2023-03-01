#include <stdio.h>
#include <stdlib.h>

int n, m;
int data[10001];

int compare(const void* a, const void* b) {
    if (*(int*)a > *(int*)b) return 1;
    else if (*(int*)a < *(int*)b) return -1;
    return 0;
}

void DFS(int arr[], int depth) {
    if (depth == m) {
        // print
        for (int i = 0; i < m; i++) {
            printf("%d ", data[i]);
        }
        printf("\n");
        return;
    } else {
        for (int i = 0; i < n; i++) {
            int tmp = arr[i];
            data[depth] = tmp;
            DFS(arr, depth+1);
        }
    }
}

int main() {
    scanf("%d %d", &n, &m);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), compare);

    DFS(arr, 0);
}
