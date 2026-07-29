#include <stdio.h>
void swap(int x, int y);
int main(void)
{
    int a = 100, b = 200;

    printf("a=%d b=%d\n", a,b);
    swap(a,b);
    printf("a=%d b=%d\n", a,b);

    return 0;}
void swap(int x, int y) {
    int tmp;
    printf("x = %d y=%d\n", x,y);

    tmp = x;
    x = y;
    y = tmp;

    printf("x=%d y=%d\n", x,y);}
// x,y의 값은 바뀌어도 a,b의 값은 바뀌지 않음.>> 포인터가 필요한 이유 