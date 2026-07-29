#include <stdio.h>

int main(void)
{
    int i = 10;
    int *pi = &i;

    printf("i = %d, pi = %p\n", i, pi);
    (*pi)++; // *pi = pi가 가리키는 곳의 값 = i의 값 > i++
    printf("i = %d, pi = %p\n", i, pi);
    *pi++; // pi의 주소를 증가 
    printf("i = %d, pi = %p\n", i, pi);
    return 0;
}