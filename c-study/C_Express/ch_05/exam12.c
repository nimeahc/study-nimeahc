#include <stdio.h>

int main() {

    char c1, c2, c3, c4;
    unsigned int result; 

    printf("첫번째 : \n");
    scanf("%c", &c1);

    printf("두번째: \n");
    scanf(" %c", &c2); //문자열은 공백을 넣고 %c 해줘야됨

    printf("세번째: \n");
    scanf(" %c", &c3);

    printf("네번째: \n");
    scanf(" %c", &c4);

    result = ((unsigned int) c4 <<24) |
            ((unsigned int)c3 << 16) |
            ((unsigned int)c2 << 8) |
            ((unsigned int)c1);
            
    printf("결과: %X\n", result);

    return 0;
}