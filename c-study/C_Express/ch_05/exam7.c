#include <stdio.h>

int main() {

    int x, y, result;

    printf("정수 입력: \n");
    scanf("%d", &x);
    printf("2를곱하고싶은횟수 : \n");
    scanf("%d", &y);
    // << 한 번 적용시 2를 곱한 값을 얻을 수 있다. 
    result = x << y;
    printf("%d<<%d의 값은 %d", x, y, result); 

    return 0;

}