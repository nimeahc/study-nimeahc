#include <stdio.h>

int main(void) {

    char op;
    int x, y, result;

    printf("수식 입력: \n");
    scanf("%d %c %d", &x, &op, &y);

    switch (op) {
        case '+':
            result = x + y;
            break;
        case '-':
            result = x - y ;
            break;
        
        case '*':
            result = x * y;
            break;
        
        case '/':
            result = x / y;
            break;

        case '%':
            result = x % y ;
            break;
        
        default:
            printf("지원안됨 \n");
            break;

    }

    printf("결과 %d", result);

    return 0;
}