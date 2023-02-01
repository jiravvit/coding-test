#include <stdio.h>
#include <string.h>

int n;

int main() {
    scanf("%d", &n);

    char cmd[n][51];

    for (int i = 0; i < n; i++) {
        scanf("%s", cmd[i]);
    }

    if (n==1) {
        printf("%s\n", cmd[0]);
        return 0;
    }

    int len = strlen(cmd[0]);
    int check = 0;
    for (int i = 0; i < len; i++) {
        check = 1;
        for (int j = 0; j < n; j++) {
            if (cmd[j][i] != cmd[0][i]) check = 0;
        }

        if (!check) cmd[0][i] = '?';
    }

    printf("%s\n", cmd[0]);
}