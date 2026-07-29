#include <stdio.h>

int main () {

    int x,y,z;
    x = 10;
    y = 10;
    z = 33;

    x += 1;
    y *= 2;
    z %= 10 + 20; // z%(10+20)

    printf("%d %d %d", x, y, z);

    return 0;
}