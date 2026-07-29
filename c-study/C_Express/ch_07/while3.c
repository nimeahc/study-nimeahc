

// 1부터 n까지의 합을 구함 

#include <stdio.h>

int main() {

    int n, sum, i;

    printf("수 입력: \n");
    scanf("%d", &n);

    i = 1;
    sum = 0;

    while (i<=n) {
        sum += i;
        i++;
    }

    printf("1부터 %d까지의 합: %d\n", n, sum); 
    return 0;
}