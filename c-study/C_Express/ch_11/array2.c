#include <stdio.h>

int main(void)
{

    int a[] = {10, 20, 30, 40, 50};

    printf("a=%d\n", a); // a[0]의 주소 
    printf("a+1 = %d\n", a+1); // a[1]의 주소 
    printf("*a=%d\n", *a); // a[0]
    printf("*(a+1)=%d\n", *(a+1)); // a[1] 의 값 

    return 0; 
}