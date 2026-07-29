/* 두 개의 숫자 합을 계산하는 프로그램 p.89*/

#include <stdio.h>

int main(void) {
    int x = 100; // 첫번째 숫자
    int y = 200; // 두번째 숫자 
    int sum;
    
    sum = x + y;
    printf("%d + %d = %d \n", x, y, sum);
    
    return 0;
}