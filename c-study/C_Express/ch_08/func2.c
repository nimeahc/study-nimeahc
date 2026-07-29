#include <stdio.h>

int max(int x, int y) {
    if (x>y) {return x;}
    else {return y;}
}

int main(void) {
    int result = max(10,20);
    printf("%d", result);
    return 0;
}