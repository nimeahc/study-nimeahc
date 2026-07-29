#include <stdio.h>

int factorial(int n){

    int i;
    int result = 1;

    for (i=1; i<=n; i++){
        result = result * i;
    }
    return result;
}

int main(void){

    int n;
    printf("팩토리얼 입력\n");
    scanf("%d", &n);

    printf("%d", factorial(n));
    
    return 0;
}