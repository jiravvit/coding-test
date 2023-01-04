#include <stdio.h>

int main() {
    char tmp[100] = {0, };

    for (int i = 0; i < 100; i++) {
        scanf("%c", &tmp[i]);
        if (tmp[i] == '\n') break;
    }

    char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
    int print[26];
    
    for (int i = 0; i < 26; i++) {
        print[i] = -1;
    }

    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 26; j++) {
            if (alphabet[j] == tmp[i]) {
                /*printf("%c %c %d %d", alphabet[j], tmp[i], j, i);*/
                /*printf("\n");*/
                if (print[j] == -1) {
                    print[j] = i;
                    /*printf("print[j] %d\n", print[j]);*/
                }
            }
            /*break;*/
        }
        if (tmp[i] == '\n') break;
    }

    for (int i = 0; i < 26; i++) {
        printf("%d ", print[i]);
    }

    printf("\n");

    return 0;
}

