#include <Stdio.h>

int main() {

    int i, sum, n;

    printf("정수입력: \n");
    scanf("%d", &n);

    i = 1;
    sum = 0;

    while (i <= n) {
        sum += i;
        i += 2;
    }

    printf("1부터 %d까지의 짝수들의 합: %d\n", n, sum); 
    return 0;
}