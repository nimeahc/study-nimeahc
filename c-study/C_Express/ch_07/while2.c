#include <stdio.h>

int main() {

    int n = 1;
    printf("===============\n");
    printf("n\tn의제곱\n");
    printf("===============\n");

    while (n<=10) {

        printf("%d\t%d\n", n, n*n);
        n++;
    }

    return 0;
}