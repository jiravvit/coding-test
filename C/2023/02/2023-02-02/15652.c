#include <stdio.h>

int n, m;
int data[10];

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
            if (i >= pre) {
                data[depth] = i;
                DFS(depth+1, i);
            }
        } 
    }
}

int main() {
   scanf("%d %d", &n, &m);
   DFS(1,0);
}
