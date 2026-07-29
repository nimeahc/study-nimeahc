#include <stdio.h>

int main() {

    int number;

    printf("정수 입력: \n");
    scanf("%d", &number);

    if (number > 0)
        printf("양수입니다.\n");

    printf("정수입니다."); //if문이 실행된 후 항상 실행됨.
     
    return 0;
}