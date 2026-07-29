#include <stdio.h>

int main(void) {
    double x,y,z ;
    double sum, avg;

    printf("3개의 실수 : \n");
    scanf("%lf %lf %lf", &x, &y, &z);

    sum = x + y + z;
    avg = sum / 3.0;

    printf("합계: %.1lf\n", sum);
    printf("평균: %.1lf\n", avg);
    
    return 0;
}