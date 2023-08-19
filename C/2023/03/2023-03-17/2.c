#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str1[8];
    char str2[8];
    scanf("%s",str1);
    scanf("%s",str2);
    int max=0;
    int min=0;
    int i;
    for(i=0;i<strlen(str1);i++)
    {
        if(str1[i]=='5')
            str1[i]='6';
    }

    for(i=0;i<strlen(str2);i++)
    {
        if(str2[i]=='5')
            str2[i]='6';
    }
    max=atoi(str1)+atoi(str2);
    for(i=0;i<strlen(str1);i++)
    {
        if(str1[i]=='6')
            str1[i]='5';
    }

    for(i=0;i<strlen(str2);i++)
    {
        if(str2[i]=='6')
            str2[i]='5';
    }
    min=atoi(str1)+atoi(str2);
    printf("%d %d",min,max);
    return 0;

}
