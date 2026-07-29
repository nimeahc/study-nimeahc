#include <stdio.h>

int main() {

    int x, ten, one;

    printf("정수 입력: \n");
    scanf ("%d", &x);

    ten = x / 10;
    one = x % 10;

    printf("십의자리: %d\n", ten);
    printf("일의 자리: %d\n", one);

    return 0;
}