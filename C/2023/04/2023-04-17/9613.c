#include <stdio.h>

int n, tc;

long long int gcd(long long int a, long long int b){
    if(a<b){ // a가 항상 큰값 
        long long int tmp = a;
        a = b;
        b = tmp;
    }
    
//b가 0이 될때까지(a%b), 반복문을 돌게되고, b가 0인 순간의 a를 GCD로 판단하고 리턴합니다.
    while(b!=0){
        long long int n = a % b;
        a = b;
        b = n;
    }
    return a;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &tc);
        long long int arr[tc];
        long long int sum = 0;
        for (int j = 0; j < tc; j++) {
            scanf("%lld", &arr[j]);
        }
        for (int j = 0; j < tc-1; j++) {
            for (int k = j+1; k < tc; k++) {
                sum += gcd(arr[j], arr[k]);
                /*printf("aa %d %d %d\n", arr[j], arr[k], sum);*/
            }
        }
        printf("%lld\n", sum);
        sum = 0;
    }
}
