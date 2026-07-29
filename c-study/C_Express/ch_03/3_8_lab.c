#include <stdio.h>

int main(void) {
    float radius ;
    float area;

    printf("반지름을 입력하시오: \n");
    scanf("%f", &radius);

    area = 3.14 * radius * radius; //c언어에는 거듭제곱 연산자가 없대.
    printf("원의 면적 : %f \n", area); 

    return 0;
}