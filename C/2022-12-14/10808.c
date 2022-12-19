#include <stdio.h>
#include <string.h>

char s[101];
char *a = "abcdefghijklmnopqrstuvwxyz";
int arr[26];

int main() {
    scanf("%100s", s);  
    for (int i = 0; i < strlen(s); i++) {
        for (int j = 0; j < strlen(a); j++) {
            if (s[i] == a[j]) arr[j] += 1 ; 
        }
    }

    for ( int i = 0; i < strlen(a); i++) { 
        printf("%d ", arr[i]); 
    }
}

