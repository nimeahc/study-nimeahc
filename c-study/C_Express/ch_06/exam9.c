#include <stdio.h>

int main() {

    float x;
    printf("정수 입력: \n");
    scanf("%f", &x);

    if (x>0) {
        x = 7*x +2;
        printf("%d", x);
    }

    else {
        x = x*x - 9*x +2;
        printf("%f", x);
    }

    return 0;
}