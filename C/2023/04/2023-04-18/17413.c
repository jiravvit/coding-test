#include <stdio.h>
#include <string.h>

char arr[100001];
char result[100001];

int main() {
    scanf("%[^\n]s", arr);
    int len = strlen(arr);
    
    for (int i = 0; i < len; i++) {
        if (arr[i] == '<') {
            while (arr[i] != '>') {
                result[i] = arr[i];
                i++;
            }
            result[i] = '>';
        } else if (arr[i] == ' ') {
            result[i] = ' ';
        } else {
            int x = i;
            while (arr[i] != '<' && arr[i] != ' ' && i != len) {
                /*result[i] = '0';*/
                i++;
            }
            i--;
            int y = i;
            for (int j = x; j <= y; j++) {
                char tmp = arr[y-j+x];
                /*printf("tmp: %c %d\n", tmp, j);*/
                result[j] = tmp; 
            }
            
            /*printf("x:%d y:%d\n", x, y);*/
        }
    }

    printf("%s\n", result);
}
