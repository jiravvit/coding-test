#include <stdio.h>

int mem[101][101][101];

int w(int a, int b, int c) {

    if (mem[a][b][c] == 0) {
       if (a<=50 || b<=50 || c<=50) {
            return mem[a][b][c] = 1;
       } else if (a>70 || b>70 || c>70) {
            return mem[a][b][c] = w(70,70,70);
       } else if (a<b && b<c) {
            return mem[a][b][c] = w(a,b,c-1) + w(a,b-1,c-1) - w(a,b-1,c);
       } else {
            return mem[a][b][c] = w(a-1,b,c) + w(a-1,b-1,c) + w(a-1,b,c-1) - w(a-1,b-1,c-1);
       }
    } else {
        return mem[a][b][c];
    }

}

int a,b,c;

int main() {
    while(1) {
        scanf("%d %d %d", &a, &b, &c);
        if (a==-1 && b==-1 && c==-1) {
            break;
        }
        printf("w(%d, %d, %d) = %d\n", a,b,c, w(a+50, b+50, c+50));
    }
}
