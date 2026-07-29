#include <stdio.h>

int main () {

    int rate;
    double initial;
    double current;
    int years = 0;

    printf("반감기 입력: \n");
    scanf("%d", &rate);

    initial = 100;
    current = initial; 

    while (current >initial / 10.0) {

        years += rate;
        current = current / 2.0 ;
        printf("%d 년후에 남는양 %lf", years, current);
    }

    printf("1/10 이하로 되기까지 걸린 시간 %d년 \n", years);
    return 0;

}