#include <stdio.h>

int main(void) {

    int x,y,z;

    print("정수 3개 입력: \n");
    scanf("%d %d %d", &x, &y, &z);

    if (x > y) {
        if (y>z) {
            printf("%d", z);
        }
        else {
            printf("%d", y);
        }
    }
    else {
        if (x>z) {
            printf("%d", z);
        }
        else {
            printf("%d", x);
        }
    }

    return 0;
}