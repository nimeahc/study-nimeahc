#include <stdio.h>

int main() {

    int i;
    int sum = 0;

    for (i=0; i<10; i++) {
        sum += i;
    }

    printf("1부터 10까지의 합 %d", sum) ;
    return 0; 
}