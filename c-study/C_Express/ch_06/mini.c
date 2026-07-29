#include <stdio.h>

int main() {

    int x;
    double rate, minus, result; 

    printf("과세표준: \n");
    scanf("%d", &x);

    if (x >= 0 && x < 12000000) {
        rate = 0.06;
        minus = 0;
    }

    else if ( x>= 12000000 && x < 46000000) {
        rate = 0.15;
        minus = 1080000;
    }

    else if (x>= 46000000 && x < 88000000 ) {
        rate = 0.24;
        minus = 5220000;
    }

    else if (x>= 88000000 && x < 150000000) {
        rate = 0.35;
        minus = 14900000;
    }

    else if (x>= 150000000 && x < 300000000) {
        rate = 0.38;
        minus = 19400000;
    }

    else if (x>=300000000 && x < 500000000) {
        rate = 0.40;
        minus = 25400000;
    }

    else if (x>=500000000 && x < 1000000000) {
        rate = 0.42;
        minus = 35400000;
    }

    else {
        rate = 0.45;
        minus = 65400000;
    }

    result = x * rate - minus ;
    printf("소득세율 : %.0lf %%\n", rate*100);
    printf("공제전 소득세 : %.0lf\n", x*rate);
    printf("누진공제액 : %.0lf\n", minus);
    printf("산출세액 : %.0lf", result);

    return 0; 
}
