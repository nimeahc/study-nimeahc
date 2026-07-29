#include <stdio.h>
#include <limits.h> //정수형의 한계를 알려주는 ㅎ더파일

int main(void) {

    short s_money = SHRT_MAX;  //최댓값 32767
    unsigned short u_money = USHRT_MAX; // 최댓값 65535

    s_money = s_money + 1;
    printf("s_money = %d \n", s_money); // 최댓값 범위에서 넘어가서 -32768이 됨 (범위에서 순환)

    u_money = u_money + 1;
    printf("u_money = %d \n", u_money); // 최댓값에서 한계를 넘어가서 0이 됨 (범위에서 순환)

    return 0;
}