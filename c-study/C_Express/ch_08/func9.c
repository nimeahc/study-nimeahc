#include <stdio.h>

int factorial(int n)
{   int i;
    int result = 1;
    
    for (i=1; i<=n; i++) {
        result = result * i;
    }

    return result;
}

int combination(int n, int r) 
{
    return (factorial(n)/(factorial(r)*factorial(n-r)));
}

int get_integer(void) {
    int n;
    printf("정수 입력:\n");
    scanf("%d", &n);
    return n;
}

int main(void) {
    int num1 = get_integer();
    int num2 = get_integer();
    printf("C(%d,%d), %d\n", num1, num2, combination(num1, num2));
    return 0;
}