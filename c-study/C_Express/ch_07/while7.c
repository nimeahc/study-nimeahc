#include <stdio.h>

int main(void) {

    int grade, n;
    double sum, avg;

    n = 0;
    sum = 0;
    grade = 0;

    printf("종료하려면 음수를 입력하시오.\n");
    while (grade >= 0) {
        printf("성적 입력:\n");
        scanf("%d", &grade);

        if (grade <0) break;
        
        sum += grade;
        n++;
    }

    avg = sum / n;
    printf("합 : %.2lf, 평균: %.2lf\n", sum, avg);

    return 0; 
}