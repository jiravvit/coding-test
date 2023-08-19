#include <stdio.h>
#include <string.h>

char input[7];

int main() {
    scanf("%s", input);
    
    int len = strlen(input);
    int x = 1;

    int sum = 0;
    for (int i = len-1; i >= 0; i--) {
        if ('A' <= input[i] && input[i] <= 'F') {
            sum += (input[i] - 55) * x;
        } else if ('0' <= input[i] && input[i] <= '9') {
            sum += (input[i] - '0') * x;
        }
        x *= 16;
    } 

    printf("%d\n", sum); 
}
