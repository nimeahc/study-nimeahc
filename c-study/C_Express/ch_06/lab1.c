#include <stdio.h>
#include <math.h>

int main (void) {

    int a, b, c;
    double d, result1, result2 ;

    printf("계수들 입력: \n");
    scanf("%d %d %d", &a, &b, &c);



    if (a==0) {
        if (b ==0) {
            printf("해못구함 \n");
        }
        else {
            printf("%.2lf", -(double)c/b);
        }

    }

    else {
        d = b*b - 4.0*a*c;
        if (d>0) {
            result1 = (-b + sqrt(d)) / (2.0*a);
            result2 = (-b - sqrt(d)) / (2.0*a);
            printf("%.2lf\n", result1);
            printf("%.2lf\n", result2); 
        }
        else if (d == 0 ) {
            printf("중근 : %.2lf\n", result1);
        }
        else {
            printf("실근 없음\n");
        }
    }

    return 0;
}