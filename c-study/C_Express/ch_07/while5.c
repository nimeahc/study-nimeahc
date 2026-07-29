#include <stdio.h>

int main() {

    int n, i, sum;
    double avg; 

    i = 0;
    sum = 0;

    while (i < 5) {
        printf("정수입력: \n");
        scanf("%d", &n);
        sum += n;
        i++;
    }
    avg = (double)sum / 5;
    printf("합 : %d", sum);
    printf("평균: %.2lf \n", avg);
    
    return 0;
}