#include <stdio.h>
#include <string.h>
char arr[1000];
int main() {
    scanf("%s", arr);
    int len = strlen(arr);
    for (int i = len-1; 0 <= i; i--) {
        printf("%c", arr[i]);
    }
}
