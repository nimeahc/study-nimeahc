#include <stdio.h>

int main(void) {
    double mile, meter;

    printf("마일: \n");
    scanf("%lf", &mile);

    meter = mile * 1609.0;
    printf("%lf 마일은 %lf 미터입니다.", mile, meter);

    return 0;
    
}