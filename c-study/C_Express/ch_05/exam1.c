#include <stdio.h>

int main() {

    int num1, num2;
    int result1, result2;

    printf("두개의 정수를 입력: \n");
    scanf("%d %d", &num1, &num2);

    result1 = num1 / num2;
    result2 = num1 % num2;

    printf("몫: %d\n", result1);
    printf("나머지: %d\n", result2);

    return 0;
}