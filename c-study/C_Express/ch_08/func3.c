#include <stdio.h>

int max(int x, int y) {
    if (x>y) {return x;}
    else {return y;}
}

int main(void) {

    int x, y;
    int result;

    printf("두 수 입력: \n");
    scanf("%d %d", &x, &y);

    result = max(x,y);

    printf("%d", result);
    return 0;
}