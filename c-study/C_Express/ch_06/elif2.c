#include <stdio.h>

int main() {

    char ch;

    printf("문자 입력 : \n");
    scanf( " %c", &ch); //문자열은 공백 건너뛸 것 

    if ( ch >= 'A' && ch <= 'Z') {
        printf("대문자입니다.\n");
    }
    else if(ch >= 'a' && ch <= 'z') {
        printf("소문자입니다.\n");
    }
    else if (ch >= '0' && ch <= '9') {
        printf("숫자입니다.\n");
    }
    else {
        printf("기타문자입니다.\n");
    }

    return 0; 
}