//유클리드 최대공약수 찾기

#include <stdio.h> 

int main() {

    int x, y, r;

    printf("두 개의 정수를 입력하시오: \n");
    scanf("%d %d", &x, &y);

    while ( y != 0) {
        r = x % y ;
        x = y;
        y = r;
    }
    
    printf("최대공약수는 %d 입니다.", x);

    return 0;

}