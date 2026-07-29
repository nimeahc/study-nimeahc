#include <stdio.h>

int main() {

    double ac, ae, bc, de;

    printf("지팡이의 높이를 입력하시오: \n");
    scanf("%lf", &bc);

    printf("지팡이의 그림자 : \n");
    scanf("%lf", &ac);

    printf("피라미드까지의 거리: \n");
    scanf("%lf", &ae);

    de = (ae * bc) / ac;
    printf("피라미드의 높이는 : %.2lf", de);

    return 0;
}