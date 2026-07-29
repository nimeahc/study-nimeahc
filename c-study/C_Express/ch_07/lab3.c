#include <stdio.h>

int main() {

    int i, years;
    double ord, rate, result;

    printf("원금: \n");
    scanf("%lf", &ord);
    printf("이율: \n");
    scanf("%lf", &rate); 
    printf("기간: \n");
    scanf("%d", &years);

    rate = rate / 100.0;
    result = ord;
    
    for (i = 1; i<= years; i++) {
        result = result * (1+rate);
        printf("%d, %lf", i, result); 
    }

    return 0 ;
}