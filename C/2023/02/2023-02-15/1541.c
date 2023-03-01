#include <stdio.h>
#include <stdlib.h>

char arr[51];
char n[6];
int i, j, flag, result;

int main() {
    scanf("%s", arr);
   
    while (arr[i] != NULL) {
        if (arr[i] == '+' || arr[i] == '-') {
            flag ? (result -= atoi(n)) : (result += atoi(n));    
            for (int k = 0; n[k] != NULL; k++) n[k] = 0;
            j = 0;
            if (arr[i] == '-') flag = 1;
        } else {
            n[j] = arr[i];
            j++;
        }
        i++;
    }

    flag ? (result -= atoi(n)) : (result += atoi(n));
    printf("%d", result);
}
