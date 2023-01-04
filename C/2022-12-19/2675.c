#include <stdio.h>
#include <string.h>

int t;

int main() {
    scanf("%d", &t);
    char arr[t][46];
    int num[t];

    for (int i = 0; i < t; i++) {
        scanf("%d %s", &num[i], arr[i]);
        arr[i][strlen(arr[i])] = '\x00';
    }

    for (int i = 0; i < t; i++) {
        for (int j = 0; j < strlen(arr[i]); j++){
            for (int k = 0; k < num[i]; k++) {
                printf("%c", arr[i][j]);
            }
        }
        printf("\n");
    }
    
}
