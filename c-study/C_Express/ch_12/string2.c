#include <stdio.h>

int main(void)
{
    char str1[6] = "Seoul"; // 큰 따옴표 써야됨.
    char str2[3] = { 'i', 's', '\0'}; //초기값을 나열해서
    char str3[] = "the capital city of korea.";

    printf("%s %s %s \n", str1, str2, str3); // %s 로 문자열 출력 <-> %c
    return 0;
}