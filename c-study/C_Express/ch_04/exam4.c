#include <stdio.h>

int main() {
    int w, h, d;
    double v;

    printf("상자의 가로 세로 높이를 한번에 입력: \n");
    scanf("%d %d %d", &w, &h, &d);

    v = w * h * d;
    printf("부피는 %lf", v);

    return 0;
}