#include <stdio.h>

int mem[100];
int n;
int cnt_rec;
int cnt_dp;

int fibo_rec(int n) {
    if (n <= 2) {
        cnt_rec++;
        return 1;
    } else {
        return (fibo_rec(n-1)+fibo_rec(n-2));
    }
}

int fibo_dp(int n) {
    if (n <= 2) return 1;
    if (mem[n] != 0) {
        return mem[n];
    } else {
        cnt_dp++;
        mem[n] = fibo_dp(n-1) + fibo_dp(n-2);
        return mem[n];
    }
}

int main() {
    scanf("%d", &n);
    fibo_rec(n);
    fibo_dp(n);
    printf("%d %d\n", cnt_rec, cnt_dp);
}