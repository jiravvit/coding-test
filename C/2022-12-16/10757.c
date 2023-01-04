#include <stdio.h>
#include <string.h>

char a[10005];
char b[10005];
int c[10005];
char big[10005];

int main() {
    scanf("%s %s", &a, &b);
    
    int a_idx = strlen(a);
    int b_idx = strlen(b);
    
    int long_idx = a_idx > b_idx ? a_idx : b_idx;

    if (a_idx < b_idx) {
        for (int i = 0; i < b_idx; i++) {
            big[i] = b[i];
        }
    } else {
        for (int i = 0; i < a_idx; i++) {
            big[i] = a[i];
        }
    }

    int stop_idx = 0;
    int tmp = 0;
    int k = 0;
    int idx = 0;

    for (int i = 0; i < long_idx; i++) {
        int tmp = (a[a_idx-1]-'0') + (b[b_idx-1]-'0');
        
        if (a_idx == 0 || b_idx == 0) {
            stop_idx = a_idx < b_idx ? b_idx : a_idx;
            k = i;
            idx = stop_idx;       
            /*printf("hello %d %d\n", k, idx); */
            while (0 < idx) {
                printf("before %d\n", c[k]);
                if (c[k] != 0) {
                    c[k] = c[k] + big[idx-1]-'0';  
                }                  
                else { 
                    c[k] = big[idx-1]-'0';
                }
                c[k] = c[k] % 10;
                c[k+1] = c[k] / 10;
                printf("after %d\n", c[k]);
                k++;
                idx--;
            }
            break;
        }
        c[i] = c[i] +  tmp % 10;
        if (9 < c[i]) {
            c[i+1] = c[i] / 10;
            c[i] = c[i] % 10;
        }
        else {
            c[i+1] = tmp / 10;
        }
        /*printf("%d %d\n", c[i], c[i+1]);*/
        
        a_idx--;
        b_idx--; 
    }
  
    /*printf("%s\n", c);*/
    int flag = 0;
    for (int i = 10004; -1 < i; i--) {
        if (c[i] == 0 && !flag) continue;
        else flag = 1;
        if (flag) printf("%d", c[i]);
    }
    printf("\n");
}
