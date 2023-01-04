#include <stdio.h>

int input, result, a, b, c, d, cycle;

int main(void){
    scanf("%d", &input);
    cycle = 0;
    result = input;
    
    do{
        a = input / 10;
        b = input % 10;
        c = (a + b) % 10;
        d = (b * 10) + c;
        input = d;
        cycle++;
    }while(d != result);
    
    printf("%d\n", cycle);
}
