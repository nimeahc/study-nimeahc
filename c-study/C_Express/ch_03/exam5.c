#include <stdio.h>

int main(void) {
    double x, sum;
    printf("x: \n");
    scanf("%lf", &x);

    sum = 3.0 * x * x + 7.0 * x + 11 ;
    printf("다항식의 값은 %.2lf", sum);

    return 0;
}