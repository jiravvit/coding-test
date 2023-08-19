#include <stdio.h>

int k;
int input[14];
int result[14];

void DFS(int depth, int pre) {
    if (depth == 6) {
        for (int i = 0; i < 6; i++) {
            printf("%d ", result[i]);
        }
        printf("\n");
    } else {
        for (int i = pre; i < k; i++) {
            result[depth] = input[i];
            DFS(depth+1, i+1);
        }
    }
}

void init() {
    for (int i = 0; i < 14; i++) {
        input[i] = 0;
        result[i] = 0;
    }
}

int main() {

    while(1) {
        scanf("%d", &k);
        if (k == 0) break;
        
        for (int i = 0; i < k; i++) {
            scanf("%d", &input[i]);
        }
        DFS(0, 0);
        init();
        printf("\n");
    }

}
