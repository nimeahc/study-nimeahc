#include <stdio.h>

int main() {
    const double meter = 3.3;
    double x;

    printf("평을 입력하시오: \n");
    scanf("%lf", &x);
    printf("면적은 %lf", x * meter);
    
    return 0;


}