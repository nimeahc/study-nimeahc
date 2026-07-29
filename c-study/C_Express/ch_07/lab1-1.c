//최소공배수 
#include <stdio.h>

int main() {
    int x,y,r;
    int a,b;

    printf("두 정수 입력: \n");
    scanf("%d %d", &x, &y);
    a = x;
    b = y;

    while ( y != 0) {
        r = x % y ;
        x = y;
        y = r;
    }

    int gcd = x;
    int lcm = (a*b) / gcd ;

    printf("최대공약수 : %d\n", gcd);
    printf("최소공배수 : %d\n", lcm);

    return 0; 
}