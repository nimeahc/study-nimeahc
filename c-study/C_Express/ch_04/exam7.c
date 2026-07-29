#include <stdio.h>

int main() {
    double m,v,e;

    printf("질량과 속도 입력 \n");
    scanf("%lf %lf", &m, &v);
    e = 0.5 * m * v * v;

    printf("운동에너지 : %lf", e);
    return 0;
}