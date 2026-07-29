#include <stdio.h>

int main(void) {
    double w, h, area, perimeter;

    printf("두 개의 숫자를 입력하시오 : \n");
    scanf("%lf %lf", &w, &h);

    area = w*h;
    perimeter = 2*(w+h);

    printf("넓이 : %lf \n둘레: %lf", area, perimeter);
    return 0;

}