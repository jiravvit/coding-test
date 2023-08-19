#include <stdio.h>

char arr[1001];
int n;

int main() {
    scanf("%s", arr);
    scanf("%d", &n);
    printf("%c\n", arr[n-1]); 
}
