#include <stdio.h>
#include <string.h>
#define MAX_SIZE 1001

int i;
int cnt;

char arr[MAX_SIZE];
char test[MAX_SIZE] = "UCPC";

int main(){
    scanf("%[^\n]s", arr);

    for(i = 0; i < strlen(arr); i++){
		if (cnt == 4) 
            break;
		else if (arr[i] == test[cnt]) {	
            /*printf("%c %c\n", arr[i], test[cnt]);*/
            cnt++;
        }
	}

    if(cnt == 4)	
        printf("I love UCPC\n");
	else	
        printf("I hate UCPC\n");
}
