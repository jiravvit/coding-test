#include <stdio.h>
#include <string.h>

int n;

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char arr[n];
        scanf("%s", arr);
        int len = strlen(arr);
        printf("%s\n", 6<=len && len<=9 ? "yes" : "no"); 
    }
}
