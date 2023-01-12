#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n;

int compare(const void *a, const void *b) {
    int a_len = strlen(a);
    int b_len = strlen(b);

    if (a_len == b_len) return strcmp((char *)a, (char *)b); // 0
    else if (a_len > b_len) return 1;
    else return -1;
}

int main() {
    scanf("%d", &n);
    char arr[n][51];
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    qsort(arr, n, 51, compare);
   
    for (int i = 0; i < n; i++) {
        if (!strcmp(arr[i], arr[i+1])) continue;             
        else printf("%s\n", arr[i]);
    }
}
