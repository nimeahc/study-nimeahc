#include <stdio.h>

int main(void) {
    float radius;
    float length;

    printf("반지름을 입력하시오: \n") ;
    scanf("%f", &radius);

    length = 2 * 3.14 * radius;
    printf("원의 둘레: %f \n", length);
    return 0;
}