#include <stdio.h>

int main() {

    int number;
    printf("정수입력: ");
    scanf("%d", &number);

    if (number % 2 == 0)
        printf("짝수입니다\n");

    else 
        printf("홀수입니다.\n");
    
    return 0; 
}