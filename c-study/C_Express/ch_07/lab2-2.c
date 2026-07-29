#include <stdio.h>

int main() {

    int a4;
    int count = 50;
    long long depth = 1;
    int i = 0;

    while (i<count) {
        depth = depth * 2;
        i++;
    }

    printf("두께: %lldmm\n", depth);
    return 0; 

}