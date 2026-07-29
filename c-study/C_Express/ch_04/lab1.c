#include <stdio.h>

int main() {

    int x,y,z,sum;
    sum = 0;

    printf("3개의 정수 입력: \n");
    scanf("%d %d %d", &x, &y, &z);
    sum += x;
    sum += y;
    sum += z;

    printf("합: %d", sum);
    return 0;
}