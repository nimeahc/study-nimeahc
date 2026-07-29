//팩토리얼

#include <stdio.h>

int main() {

    int i;
    int n;
    int fac = 1;
    printf("팩토리얼 입력: \n");
    scanf("%d", &n);

    for (i=1; i<=n; i++) {
        fac = i * fac;
    }
    printf("결과: %d", fac);
    return 0; 
}