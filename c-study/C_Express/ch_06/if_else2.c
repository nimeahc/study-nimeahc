#include <stdio.h>

int main() {

    int num1, num2, result;

    printf("분모 분자 입력: \n");
    scanf("%d %d", &num1, &num2);

    if (num2 == 0)
        printf("0으로는 나눌 수 없어요 \n");

    else {
        result = num1 / num2 ;
        printf("%d", result);
    } // 중괄호 꼭 

    return 0;
}