#include <stdio.h>
#include <string.h>
char arr[1000005];

int main() {
    scanf("%s", arr);
    int arr_len = strlen(arr); 
    for (int i = 0; i < arr_len; i++) {
        if (97 <= arr[i] && arr[i] <= 122) arr[i] = arr[i] - 32;
        else continue;
    }
    
    char upper[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char c[26] = {0, };
    for (int i = 0; i < arr_len; i++) {
        for (int j = 0; j < 26; j++) {
            if (arr[i] == upper[j]) c[j]++;
        }
    }

    int big = c[0];
    for (int i = 0; i < 26; i++) {
        big = big < c[i] ? c[i] : big;
    }

    int cnt = 0;
    int idx = 0;
    for (int i = 0; i < 26; i++) {
        if (big == c[i]) {
            cnt++;
            idx = i;
        }
    }

    if (1 < cnt) printf("?\n");
    else printf("%c\n", upper[idx]);
    
}
