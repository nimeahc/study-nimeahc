#include <stdio.h>

int main() {

    int x,y;

    printf("정수2개 입력 \n");
    scanf("%d %d", &x, &y);

    printf("and 연산 : %d\n", x&&y); //true 면 1 false면 0 
    printf("or 연산 : %d\n", x||y);
    printf("not x 연산: %d \n", !x); // 0이 아니면 모두 참으로 간주한다. 

    return 0;
}