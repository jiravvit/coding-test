#include<stdio.h>
#include<ctype.h>

char arr[256];
int cnt = 0;

int main() {
	while (1) {
		scanf("%[^\n]s", arr);
        getchar();
		if (arr[0] == '#')
			return 0;
		/*puts(arr);*/
        for (int i= 0; arr[i]; i++)
        {
            if (tolower(arr[i]) == 'a' || tolower(arr[i]) == 'e' || tolower(arr[i]) == 'i' || tolower(arr[i]) == 'o' || tolower(arr[i]) == 'u')
            {
                cnt++;
            }
        }
        printf("%d\n", cnt);
        cnt = 0;
	}
}
