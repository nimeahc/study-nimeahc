#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[100];
    char s2[100];
    int result;

    printf("첫 번째 단어 입력:\n");
    scanf("%s", s1);
    printf("두번째 단어 입력:\n");
    scanf("%s", s2);

    result = strcmp(s1, s2); // 두 문자열 비교
    if (result < 0) 
        {printf("%s가 %s보다 앞\n", s1, s2);}
    else if (result == 0)
        {printf("%s과 %s 가 같음\n", s1, s2);}
    else
        {printf("%s가 %s보다 뒤\n", s1, s2);}

    return 0;
}