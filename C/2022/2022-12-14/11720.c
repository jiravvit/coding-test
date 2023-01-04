#include <stdio.h>
#include <string.h>

int num, sum;
char arr[101];

int main() {
    scanf("%d",&num);
    scanf("%100s", arr);
    
    for (int i = 0; i < num; i++) {
        sum += arr[i] - '0';
    }
    
    printf("%d\n", sum);    

    return 0;
}

