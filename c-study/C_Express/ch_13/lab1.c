#include <stdio.h>
#include <math.h>

struct point {
    int x;
    int y;
};

int main(void)
{
    struct point p1, p2;
    int x_dist, y_dist;
    double dist;

    printf("점의 좌표 입력: \n");
    scanf("%d %d", &p1.x, &p1.y);

    printf("점의 좌표 입력: \n");
    scanf("%d %d", &p2.x, &p2.y);

    x_dist = p1.x - p2.x;
    y_dist = p1.y - p2.y;

    dist = sqrt((double)(x_dist*x_dist + y_dist*y_dist));
    printf("거리는 %lf", dist);

    return 0; 
}