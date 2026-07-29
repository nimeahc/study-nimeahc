#include <stdio.h>

int main() {

    int x,y,result;

    printf("정수 2개 입력: \n");
    scanf("%d %d", &x, &y);

    result = x + y ;
    printf("합: %d\n", result);

    result = x - y;
    printf("합: %d\n", result);

    result = x * y ;
    printf("곱 : %d\n", result); 

    result = x % y;
    printf("나머지 연산자는 %% 두번 : %d\n", result);

    return 0;
    
}