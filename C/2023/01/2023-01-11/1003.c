#include <stdio.h>

int n;
static int zero;
static int one;

int fibo(int n, int left, int right);
int fibo_tail(int n);
int fibonacci(int n);

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int num = 0;
        scanf("%d", &num);
        if (num == 1) {
            printf("0 1\n");
        } else {
            /*fibo_tail(num);*/
            fibonacci(num);
            printf("%d %d\n", zero, one);
            zero = 0;
            one = 0;
        }
    }
}

int fibo(int n, int left, int right) {
    /*if (0 < n) {*/
        /*if (left==0) zero++;*/
        /*else if (left==1) one++;*/
    /*}*/
    if (n==0) {
        zero++;
        return 0;
    } else if (n==1) {
        one++;
        return right;
    } else return fibo(n-1, right, right+left);
}

int fibo_tail(int n) {
    return fibo(n, 0, 1);
}

int fibonacci(int n) {
    if (n == 0) {
        /*printf("0");*/
        zero++;
        return 0;
    } else if (n == 1) {
        one++;
        /*printf("1");*/
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
