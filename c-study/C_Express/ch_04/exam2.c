#include <Stdio.h>

int main() {
    int num;

    printf("16진수 정수를 입력하쇼: \n");
    scanf("%x", &num);

    printf("8진수  : %o\n", num);
    printf("10진수 : %d\n", num);
    printf("16진수 : %#X\n", num);

    return 0;
}