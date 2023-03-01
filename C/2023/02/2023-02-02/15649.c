#include <stdio.h>
#include <stdbool.h>

int n, m;
int data[1000];
bool visit[1000];

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
            if (visit[i] == false) {
                data[depth] = i;
                visit[i] = true;
                DFS(depth+1);
                visit[i] = false;
            }
        }
    }
}  

int main() {
    scanf("%d %d", &n, &m);
    DFS(0);    
}
