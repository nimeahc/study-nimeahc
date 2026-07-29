#include <stdio.h>

int main() {

    const double PI = 3.141592;
    double x, y;
    double radius;

    printf("거리: \n");
    scanf("%lf", &x);

    printf("각도: \n");
    scanf("%lf", &y);

    radius = (x * 360 / y) / (2*PI) ;
    printf("지구 반지름: %.2lf", radius);

    return 0;
}