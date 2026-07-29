#include <stdio.h>

int get_integer() {
    int n;
    printf("정수입력 : \n");
    scanf("%d", &n);
    return n;
}

int find_prime(int n) {
    int i;
    for (i=2; i<n; i++) {
        if (n%i == 0) {return 0;}
    }
    return 1;
}

int main(void) 
{
    int n = get_integer();
    if (find_prime(n) == 0) {printf("소수아님\n");}
    else {printf("소수임\n");}
    return 0;
}
