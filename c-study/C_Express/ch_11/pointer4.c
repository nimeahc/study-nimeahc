#include <stdio.h>

int get_line(int x1, int y1, int x2, int y2, float *slope, float *yintercept);

int main(void) {
    float s,y;
    if (get_line(3,3,6,6,&s, &y)== -1) {
        printf("에러\n");
    }
    else {
        printf("기울기 %.2f, y절편 %.2f", s, y);
    }
    return 0;
}

int get_line(int x1, int y1, int x2, int y2, float *slope, float *yintercept){

    if (x1 == x2) {return -1;}
    else {
        *slope = (float)(y2-y1) / (float)(x2-x1);
        *yintercept = y1 - (*slope)*x1; // 포인터 곱하기 x1 
        return 0;
    }
}