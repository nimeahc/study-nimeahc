/* 변수형 size 계산해보자
정수형 : short, int, long, long long
부동소수점 : float, double, long double
문자형 : char  */

#include <stdio.h>

int main(void) {
    
    int x;
    printf("변수 x의 크기 : %d\n", sizeof(x));

    printf("char형의 크기 : %d\n", sizeof(char));

    printf("int형 크기: %d \n", sizeof(int) );
    printf("long형 크기: %d \n", sizeof(long) );
    printf("long long형 크기: %d \n", sizeof(long long) );
    printf("short형 크기: %d \n", sizeof(short) );

    printf("float형 크기: %d \n", sizeof(float) );
    printf("double형 크기: %d \n", sizeof(double) );
    printf("long double형 크기: %d \n", sizeof(long double) );

    printf("unsigned char형 크기: %d \n", sizeof(unsigned char) );
    printf("unsigned int형 크기: %d \n", sizeof(unsigned int) );
    printf("unsigned long형 크기: %d \n", sizeof(unsigned long) );
    printf("unsigned long long형 크기: %d \n", sizeof(unsigned long long) );
    printf("unsigned short형 크기: %d \n", sizeof(unsigned short) );
    printf("signed char형 크기: %d \n", sizeof(signed char) );
    

    return 0;

}
