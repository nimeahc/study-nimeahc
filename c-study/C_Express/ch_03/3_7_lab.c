// lab 사칙연산

#include <stdio.h>

int main() {
    int x = 20;
    int y = 10;
    int sum, diff, mul, div;

    sum = x + y ;
    diff = x - y ;
    mul = x * y ;
    div = x / y ;

    printf("%d + %d = %d \n", x, y, sum);
    printf("%d - %d = %d \n", x, y , diff);
    printf("%d * %d = %d \n", x, y, mul);
    printf("%d / %d = %d \n", x, y, div);

    return 0; 
}