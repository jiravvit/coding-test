#include <stdio.h>

int arr[7], sum, s, cnt, flag;

int main() {
    for (int i = 0; i < 7; i++) {
        scanf("%d", &arr[i]);
        sum = arr[i]%2 ? sum+arr[i] : sum;
        arr[i] = arr[i]%2 ? arr[i] : -1;
    }

    if (sum == 0) {
        printf("-1\n");
        return 0;
    }
    else printf("%d\n", sum);

    for (int i = 0; i < 7; i++) {
        if (arr[i] == -1) {
            cnt++;
        } else {
            cnt++;
            if (!flag) {
                s = arr[i];
                flag = 1;
            }
            s = arr[i]<s ? arr[i] : s;
        }
    }
    printf("%d\n", s);
}
