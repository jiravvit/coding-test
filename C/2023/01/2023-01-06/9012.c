#include <stdio.h>

int n;
char arr[51];
int cnt;

int main() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", arr);
        for (int j = 0; arr[j] != 0; j++) {
            if (arr[0] == ')') {
                printf("NO\n");
                break;
            } else if (arr[j] == '(') {
                /*printf("%d \( %d\n", j, cnt);*/
                cnt++;  
            } else if (arr[j] == ')') {
                /*printf("%d \) %d\n", j, cnt);*/
                if (cnt <= 0) {
                    printf("NO\n");
                    break;
                }
                cnt--;
                /*printf("\) %d", cnt);*/
            }
            if (arr[j+1]==0 && cnt==0) {
                printf("YES\n");
            } else if (arr[j+1]==0 && cnt!=0) {
                printf("NO\n");
            }
        }
        cnt = 0;
    }

}
