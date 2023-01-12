#include <stdio.h>
#include <string.h>

int n, cnt;

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char arr[101];
        scanf("%100s", arr);
        
        int len = strlen(arr);
        int flag = 0;

        if (len <= 2) cnt++;
        else {
            for (int j = 0; j < len-1; j++) {
                if (arr[j] != arr[j+1]) {
                    for (int k = j+2; k < len; k++) {
                        if (arr[j] == arr[k]) {
                            flag = 1;
                            break;
                        }
                    }
                }
                if (flag) break;
            }
            if (!flag) cnt++;
        }
        
    }
    printf("%d\n", cnt);

}
