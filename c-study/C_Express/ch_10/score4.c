#include <stdio.h>

#define STUDENTS 5

int main(void)
{
    int i;
    int scores[STUDENTS];
    int sum = 0;
    double avg;

    for (i=0; i<STUDENTS; i++ ) {
        printf("성적입력:\n");
        scanf("%d", &scores[i]);
    }

    for (i=0; i<STUDENTS; i++) {
        sum = scores[i] + sum;
    }
    avg = (double)sum / STUDENTS ; //형변환 필수 
    printf("평균: %.2lf\n", avg);

    return 0;
}