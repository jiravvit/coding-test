#include <stdio.h>
#include <stdbool.h>

int n, s;
int arr[22];
int cnt;

void func(int cur, int sum) {
    if (cur == n) {
        if (sum == s) {
            cnt++;
            // return;
        }
        return;
    } 
    func(cur+1, sum);
    func(cur+1, sum+arr[cur]); 
}

int main() {
    scanf("%d %d", &n, &s);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    func(0, 0);
    printf("%d\n", s==0 ? cnt-1 : cnt);
}
