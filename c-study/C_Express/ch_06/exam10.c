#include <stdio.h>

int main(void) {

    int x,y;

    printf("정수 2개 입력: \n");
    scanf("%d %d", &x, &y);

    if (x>0) {
        if (y>0) {
            printf("1사분면\n");
        }
        else {
            printf("4사분면\n");
        }
    }
    else { 
        if (y>0) {
            printf("2사분면\n");
        }
        else {
            printf("3사분면\n");
        }
    }
    return 0;
}