#include <stdio.h>

int main(void) {
    int f;
    double c;

    printf("f: \n");
    scanf("%d", &f);

    c = (f-32) * 5.0 / 9.0 ;
    printf("섭씨값은 %.2lf", c);

    return 0;
}