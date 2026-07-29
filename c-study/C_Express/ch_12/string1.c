#include <stdio.h>

int main(void) {

    int i;
    char str[4]; // 문자 배열 선언

    str[0] = 'a';
    str[1] = 'b';
    str[2] = 'c';
    str[3] = '\0'; // NULL 문자임 = 문자열 마지막 

    i = 0;

    while(str[i] != '\0') {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}