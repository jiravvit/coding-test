#include <stdio.h> 
#include <string.h>

int n;

int compare(char *q, char *w) { 
    return strcmp(q, w); 
}

int main() {
    scanf("%d", &n);
    char arr[21];

    char tmp[n][21];
    int t = 0;
    int cnt = 0;

    while (n--) {
        scanf("%s", arr);
        if (strcmp(arr, "ENTER")) {
            strcpy(tmp[t++], arr);
        }
        if (!n || !strcmp(arr, "ENTER")) {
            qsort(tmp, t, 21, compare);
            for (int i = 0; i < t; i++) {
                if (!i || strcmp(tmp[i-1], tmp[i])) {
                    cnt++;
                }
            }
            t = 0;
        }

    }
    printf("%d\n", cnt);
} 
