#include <stdio.h>
char arr[1000005];

int main() {
    scanf("%s", arr);

    int a[26] = {0, };
    for (int i = 0; i < 1000004; i++) {
        if (arr[i] == '\n') break;
        if (97 <= arr[i] && arr[i] <= 122) a[arr[i]-32-65]++;
        else if (65 <= arr[i] && arr[i] <= 92) a[arr[i]-65]++;
    }

    int big = a[0];
    for (int i = 1; i < 26; i++) {
        big = big > a[i] ? big : a[i];
    }

    int cnt = 0;
    for (int i = 0; i < 26; i++) {
        if (big == a[i]) cnt++;
    }

    if (cnt > 1) {
        printf("?\n");
        return 0;
    }

    int idx = 0;
    for (int i = 0; i < 26; i++) {
        if (big == a[i]) idx = i;
    }

    char *up = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%c\n", up[idx]);

}
