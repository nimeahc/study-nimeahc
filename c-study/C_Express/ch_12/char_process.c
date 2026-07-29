#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int c;

    while ( (c=getchar()) != EOF) {
        if ( islower(c)) {  // 만약 소문자라면? 
            c = toupper(c); //  대문자로 
        }
        putchar(c);
    }
    return 0;
}