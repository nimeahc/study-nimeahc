#include <stdio.h>

int main(void)
{

    int i = 10;
    int *p = NULL;

    p = &i;
    printf("i = %d\n", i);

    *p = 20; // 포인터로 i의 값을 바꿀 수 있다.
    printf("i = %d\n", i);

    return 0;
}