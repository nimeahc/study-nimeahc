#include <stdio.h>
#include <math.h>


int main() {

    int height;
    double weight;
    double modern; 

    printf("체중과 키를 입력: \n");
    scanf("%d %lf", &height, &weight);

    modern = (height - 100) * 0.9 ;

    if (weight > modern) {
        printf("과체중\n");
    }
    else if (fabs(weight - modern) < 0.001){ //double 끼리는 == 안됨. 
        printf("평균\n");
    }
    else {
        printf("저체중 \n");
    }

    return 0;
}