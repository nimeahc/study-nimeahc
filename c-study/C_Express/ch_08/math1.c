#include <stdio.h>
#include <math.h>

int main(void)
{
    double result; 
    double value = 1.5;

    result = floor(value); // 반내림? 
    printf("%lf ", result);

    result = ceil(value); // 반올림
    printf("%lf ", result);

    return 0;
}