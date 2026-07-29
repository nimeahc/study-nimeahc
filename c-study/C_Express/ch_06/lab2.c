#include <stdio.h>

int main (void) {

    char op;
    int x, y, result;

    printf("수식 입력: \n");
    scanf("%d %c %d", &x, &op, &y);

    if ( op == '+') {
        result = x + y;
        printf("%d", result);
    }
    else if (op == '-') {
        result = x - y;
        printf("%d", result);
    }

    else if (op == '*') {
        result = x * y;
        printf("%d", result);
    }

    else if (op == '/') {
        if ( y == 0) {
            printf("안됨\n");
        }
        else {
            result = x / y;
            printf("%d", result);
        }
    }

    else if (op == '%') {
        if ( y == 0) {
            printf("안됨\n");
        }
        else {
            result = x % y;
            printf("%d", result);
        }
    }

    else {
        printf("지원 안됨\n");
    }

    return 0;
}