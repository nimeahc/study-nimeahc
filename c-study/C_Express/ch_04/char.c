#include <stdio.h>

int main() {
    char code = 'A';

    printf("%d %d %d \n", code, code+1, code+2); \\숫자로 받아들임
    printf("%c %c %c \n", code, code+1, code+2); \\문자로 나타냄 

    return 0;
}