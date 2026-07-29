// getchar

#include <stdio.h>

int main(void)
{
    int ch; // getchar() 자체가 int 
    while (( ch = getchar() ) != EOF ) {
        putchar(ch); // 한 글자 출력
    }
    return 0;
}