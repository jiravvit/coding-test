#include <stdio.h>
#include <stdbool.h>

int n, m;
int data[10];
bool visit[10];

void DFS(int depth) {
    if (depth == m) {
        // print
        for (int i = 0; i < m; i++) {
            printf("%d ", data[i]);
        }
        printf("\n");
        return;
    } else {
        for (int i = 1; i <= n; i++) {
            data[depth] = i;
            DFS(depth+1);
        }
    }
}

int main() {
    scanf("%d %d", &n, &m);
    DFS(0);
}
