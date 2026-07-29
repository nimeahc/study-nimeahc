#include <stdio.h>

struct point {
    int x;
    int y;
};

struct area {
    struct point p1;
    struct point p2; // 구조체 안에 구조체 
};

int main(void)
{
    struct area r;
    int w,h,wh,peri;

    printf("왼쪽 상단 좌표 입력:\n");
    scanf("%d %d", &r.p1.x, &r.p1.y);
    printf("오른쪽 하단 좌표 입력: \n");
    scanf("%d %d", &r.p2.x, &r.p2.y);

    w = r.p2.x - r.p1.x;
    h = r.p1.y - r.p2.y;

    wh = w * h ;
    peri = 2 * (w+h);
    printf("면적 : %d, 둘레 : %d", wh, peri);

    return 0;
    
}

