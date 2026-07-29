#include <stdio.h>

int main() {

    const double PI = 3.14;
    double radius, area1, area2;

    printf("구의 반지름 입력: \n");
    scanf("%lf", &radius);

    area1 = PI * radius *radius * 4;
    area2 = PI * radius * radius * radius * 4.0 / 3.0 ;

    printf("표면적은 %.2lf입니다. \n", area2);
    printf("체적은 %.2lf입니다. \n", area1);

    return 0;
}