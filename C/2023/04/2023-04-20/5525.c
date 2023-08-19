#include <stdio.h>

int n, m;

int main() {
    scanf("%d %d", &n, &m);
    char arr[m+1];
    scanf("%s", arr);

    int cnt = 0;
    int result_cnt = 0;
    for (int i = 0; i < m-1; i++) {
        if (arr[i] == 'I') {
            while (arr[i+1] == 'O' && arr[i+2] == 'I') {
                cnt++;
                if (cnt == n) {
                    /*printf("%d\n", cnt);*/
                    result_cnt++;
                    cnt--;
                }

                i += 2;
            }
            cnt = 0; 
            
        } else {
            continue;
        }
    }
    printf("%d\n", result_cnt);
}
