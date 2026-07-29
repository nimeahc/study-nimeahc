#include <stdio.h>

int main(void)
{

    int i = 10;
    double f = 12.3;
    int j = 5;
    int *p; // 정수 포인터 선언됨 
    int *pi = NULL;
    double *pf = NULL;

    pi = &i;
    pf = &f;
    p = &j; // 정수 포인터 p에 변수 j의 주소를 저장함. 
    printf("%p %p\n", pi, &i); // 같은 값이 나오겠지 
    printf("%p %p\n", pf, &f);
    printf("%d \n", *p); // 5가 출력됨  
    // *은 포인터가 가리키는 변수의 값을 반환함.
    return 0;
}