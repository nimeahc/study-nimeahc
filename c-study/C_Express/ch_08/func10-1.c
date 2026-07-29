#include <stdio.h>

int get_integer() {
    int n;
    printf("정수입력 : \n");
    scanf("%d", &n);
    return n;
}

int find_prime(int n) {
    int i;
    if (n<2) {return 0;}
    for (i=2; i<n; i++) {
        if (n%i == 0) {return 0;}
    }
    return 1;
}

int main(void) 
{
    int n = get_integer();
    for (int i=1; i<=n; i++) {
        if (find_prime(i)) {
            printf("%d,", i);
        }
    }
    return 0;
}
