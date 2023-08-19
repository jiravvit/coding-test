#include <stdio.h>
#include <string.h>

char arr[256];

int main() {
    scanf("%[^\n]s", arr);
    int len = strlen(arr);


    int happy_cnt = 0;
    int sad_cnt = 0;

    for (int i = 0; i < len; i++) {
        if (arr[i] == ':' && arr[i+1] == '-') {
            if (arr[i+2] == ')') {
                happy_cnt++;
                i = i+2;
            } else if (arr[i+2] == '(') {
                sad_cnt++;
                i = i+2;
            } else {
                continue;
            }
        }
    }    
    
    if (happy_cnt > sad_cnt) {
        printf("happy\n");
    } else if (happy_cnt != 0 && happy_cnt == sad_cnt) {
        printf("unsure\n");
    } else if (happy_cnt < sad_cnt) {
        printf("sad\n");
    } else {
        printf("none\n");
    }
}
