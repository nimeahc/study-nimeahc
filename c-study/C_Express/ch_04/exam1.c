#include <stdio.h>

int main() {
    double x;

    printf("실수를 입력하시오:\n");
    scanf("%lf", &x);

    printf("실수형식으로는 %lf\n지수형식으로는 %e", x, x);
    return 0;
}