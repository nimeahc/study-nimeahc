#include <stdio.h>

int main(void) {
    double earth, moon ;
    printf("몸무게: \n");
    scanf("%lf", &earth);
    moon = earth * 0.17;
    printf("달에서의 몸무게는 %.2lfkg입니다.", moon);

    return 0;

}