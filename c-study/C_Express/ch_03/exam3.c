#include <stdio.h>

int main(void) {
    double base, height, area;
    
    printf("base: \n");
    scanf("%lf", &base);
    
    printf("height:\n");
    scanf("%lf", &height);
    
    area=0.5*base * height;
    printf("삼각형의 넓이 %.2lf", area);

    return 0;

}