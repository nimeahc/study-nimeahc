#include <stdio.h>

int main(void)
{

    int i = 10;
    char c = 32;
    double f = 36.5;
    // 실행할때마다 주소는 달라짐 (ASLR 운영체제 기능 때문에)
    printf("i주소 : %p\n", &i); // 변수 i의 주소를 출력한다 
    printf("c주소 : %p\n", &c);
    printf("f주소 : %p\n", &f);

    return 0; 
}