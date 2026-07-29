#include <stdio.h>

int main() {

    const int SEC_PER_MINUTE = 60 ;
    int input, minute, second;

    printf("초를 입력: \n");
    scanf("%d", &input);

    minute = input / SEC_PER_MINUTE;
    second = input % SEC_PER_MINUTE;

    printf("%d초는 %d분 %d초\n", input, minute, second);

    return 0;
}