/* 삼중 연산자 
(x>y)? x:y
x>y 가 참이면 x, 거짓이면 y다. 
*/
#include <stdio.h>

int main() {

    int x,y;

    printf("정수 2개: \n");
    scanf("%d %d", &x, &y);

    printf("큰수 %d\n", (x>y)? x : y);
    printf("작은수 %d \n", (x<y)? x:y);

    return 0;
}