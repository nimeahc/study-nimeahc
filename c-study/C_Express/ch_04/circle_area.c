#include <stdio.h>

int main(void) {
    double radius, area;
    
    printf("radius: \n");
    scanf("%lf", &radius);

    area = 3.141592 * radius * radius ;
    printf( "area : %lf \n" ,area);

    return 0;
}