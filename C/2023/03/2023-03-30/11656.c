#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
    return strcmp(*(char**)a, *(char**)b);
}

int main()
{
    char s[1001];
    scanf("%s", s);

    char* result[1001];
    for (int i = 0; i < strlen(s); i++)
    {
        result[i] = &s[i];
        /*printf("%p %c %s\n", &s[i], s[i], result[i]);*/
    }
    
    qsort(result, strlen(s), sizeof(char*), compare);
    
    for (int i = 0; i < strlen(s); i++)
    {
        printf("%s\n", result[i]);
    }
    return 0;
}
