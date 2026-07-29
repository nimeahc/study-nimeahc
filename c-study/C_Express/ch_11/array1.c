#include <stdio.h>

int main(void)
{
    int a[] = { 10, 20, 30, 40, 50};
    printf("&a[0] = %d\n", &a[0]);
    printf("&a[1] = %d\n", &a[1]);
    printf("&a[2] = %d\n", &a[2]);
    printf("a = %d\n", a); // a = 첫번째 요소 a[0]의 주소값이 나옴

    return 0;
}