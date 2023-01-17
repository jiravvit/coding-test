#include <stdio.h>
#include <string.h>

int main() {
    while (1) {
        char arr[6] = {};
        scanf("%5s", arr);
        if (arr[0] == '0') break;
        
        int len = strlen(arr);
        
        switch (len) {
            case 1:
                printf("yes\n");
                break;
            case 2:
                if (arr[0] == arr[1]) printf("yes\n");
                else printf("no\n");
                break;
            case 3:
                if (arr[0] == arr[2]) printf("yes\n");
                else printf("no\n");
                break;
            case 4:
                if (arr[0] == arr[3])
                    if (arr[1] == arr[2])
                        printf("yes\n");
                    else 
                        printf("no\n");
                else 
                    printf("no\n");
                break;
            case 5:
                if (arr[0] == arr[4])
                    if (arr[1] == arr[3])
                        printf("yes\n");
                    else 
                        printf("no\n");
                else
                    printf("no\n");
            default:
                break;
        }

        /*for (int i = 0; arr[i] != 0; i++) {*/
            /*printf("%c", arr[i]);*/
        /*}*/
        
    }    

}
