#include <stdio.h>

int main() {

    double light_speed = 300000;
    double distance = 149600000;
    double time;
    time = distance / light_speed;

    printf("빛의 속도는 %lf\n 거리는 %lf\n", light_speed, distance);
    printf("시간: %lf초\n", time);
    printf("분단위 : %lf", time/60);
    return 0;

}