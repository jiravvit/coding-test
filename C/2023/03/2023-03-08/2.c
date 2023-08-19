#include <stdio.h>

int main()
{
    char s1[5][100];    // 최대 100길이의 문자를 입력받음.

    printf("문자열을 입력하세요: ");
    for(int i=0;i<5;i++){
        scanf("%s", s1[i]);     // 표준 입력을 받아서 배열 형태의 문자열에 저장
    }
    
    for(int i=0;i<5;i++){
        printf("%s\n", s1[i]);  // 문자열의 내용을 출력
    }
    
    return 0;
}

