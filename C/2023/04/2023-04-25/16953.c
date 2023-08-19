#include <stdio.h>
int B, check = 0;

void recursion(int num, int count) {
    if(num == B) {
        printf("%d", count+1);
        check = 1;
    }
    if(num <= 500000000) recursion(num*2, count+1);
    if(num <= 100000000) recursion(num*10+1, count+1);
}

int main() {
    int A;
    scanf("%d %d", &A, &B);
    recursion(A, 0);
    if(!check) printf("-1");
}
