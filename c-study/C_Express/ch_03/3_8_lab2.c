#include <stdio.h>

int main(void) {
    int won ;
    double rate;
    double dollar;

    printf("환율을 입력하시오: \n");
    scanf("%lf", &rate);
    printf("원화 금액을 입력하시오: \n");
    scanf("%d", &won);
    
    dollar = won / rate;
    printf("원화 %d원은 %lf달러입니다.", won, dollar);
    return 0;
}