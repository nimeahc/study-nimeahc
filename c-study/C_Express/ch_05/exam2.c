#include <stdio.h>

int main() {

    double x, y;
    double sum, del, dou, ahr;

    printf("실수를 입력하시오: \n");
    scanf("%lf %lf", &x, &y);

    sum = x + y;
    del = x - y;
    dou = x * y;
    ahr = x / y;

    printf("%.2lf %.2lf %.2lf %.2lf", sum, del, dou, ahr);

    return 0;
}