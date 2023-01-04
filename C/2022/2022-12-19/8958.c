#include <stdio.h>
#include <string.h>

int n;

int main() {
    scanf("%d", &n);
    char arr[n][81];
    int score[n];
   

    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
        arr[i][strlen(arr[i])] = '\x00';
    }
    
    // OX
    int tmp = 0; 
    for (int i = 0; i < n; i++) {
        score[i] = 0;
        tmp = 0;
        for (int j = 0; j < strlen(arr[i]); j++) {
            if (arr[i][j] == 'O') {
                tmp++;
                score[i] += tmp;
            }
            else {
                tmp = 0;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d\n", score[i]);
    }

}
