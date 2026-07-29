//세제곱 

#include <stdio.h>

int main() {

    int i;
    int n;

    printf("숫자 입력:\n");
    scanf("%d", &n);

    printf("================\n");
    for (i=1; i<=n; i++) {
        printf("%d\t%d\n",i,i*i*i);
    }
    printf("================\n");

    return 0;
}