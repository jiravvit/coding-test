#include <stdio.h>
#include <string.h>

char arr[1000001];

int main() {
    scanf("%[^\n]s", arr);
    int len = strlen(arr);
    
    int cnt_0 = 0;
    int cnt_1 = 0;
    for (int i = 0; i < len-1; i++) {
        if (arr[i] == '0' && arr[i+1] == '1') { 
            cnt_0++;
        } else if (arr[i] == '1' && arr[i+1] == '0') {
            cnt_1++;
        } 
    }    

    printf("%d\n", cnt_0 >= cnt_1 ? cnt_0 : cnt_1);
}
