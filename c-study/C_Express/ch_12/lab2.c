#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{

    int lower_count = 0;
    int upper_count = 0;
    int digit_count = 0;
    int len;
    char pass[100];

    printf("패스워드를 입력하시오 : \n");
    gets_s(pass, sizeof(pass));

    len = strlen(pass); // 문자열 길이 측정
    if (len < 7) {
        printf("유효한 입력이 아님\n");
        exit(1); // 프로그램 종료 
    }

    for (int i = 0; i < len; i++) {
        if (islower(pass[i])) {++lower_count;}
        if (isupper(pass[i])) {++upper_count;}
        if (isdigit(pass[i])) {++digit_count;}
    }

    if (lower_count >0 && upper_count > 0 && digit_count > 0) {
        printf("암호 성공\n");
    }
    else {
        printf("암호 실패 \n");
    }
    return 0;
}