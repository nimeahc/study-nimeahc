#include <stdio.h>

int main(void) {

    char ch;
    printf("문자입력: \n");
    ch = getchar();

    switch (ch) {
        case 'R':
        case 'r':
            printf("Rectangle\n");
            break;
        case 'T':
        case 't':
            printf("Triangle\n");
            break;
        case 'C':
        case 'c':
            printf("Circle \n");
            break;
        default:
            printf("Unknown\n");
            break;
    }

    return 0; 

}