#include <stdio.h>

int main() {

    double x, y;
    int quart;

    printf("x좌표: \n");
    scanf("%lf", &x);

    printf("y좌표: \n");
    scanf("%lf", &y);

    quart = (x>0 && y>0)? 1:
            (x<0 && y>0)? 2:
            (x<0 && y<0)? 3: 
            4;
    
    printf("%d사분면", quart);

    return 0;
}