#include <stdio.h>
#include <stdbool.h>

int n, m;
int data[10];
bool visit[10];

void DFS(int depth, int pre) {
    if (depth == m+1) {
        // print
        for (int i = 1; i <= m; i++) {
            printf("%d ", data[i]);
        }
        printf("\n");
        return;
    } else {
        for (int i = 1; i <= n; i++) {
            if (visit[i] == false && pre < i) {
                data[depth] = i;
                visit[i] = true;
                DFS(depth+1, i);
                visit[i] = false;
            }
        }
    }
}

int main() {
    scanf("%d %d", &n, &m);
    DFS(1, 0);
}
