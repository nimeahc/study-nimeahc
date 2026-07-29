#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void)
{

    int i;
    int prices[SIZE] = {0};
    int minimum, maximum ;
    srand((unsigned)time(NULL));

    printf("-----------------------------\n");
    for (i=1; i<=SIZE; i++) {
        printf("%d ", i); }
    printf("\n"); 
    printf("-----------------------------\n");

    for (i=0; i<SIZE; i++) {
        prices[i] = ( rand() % 100 ) + 1; // 1~100까지 난수 발생 
        printf("%-3d ", prices[i]);
    }
    printf("\n"); 

    minimum = prices[0];
    for (i=0; i<SIZE; i++) {
        if (prices[i] < minimum) {
            minimum = prices[i];
        }
    }

    maximum = prices[0];
    for (i=0; i<SIZE; i++) {
        if (prices[i] > maximum) {
            maximum = prices[i];
        }
    }

    printf("최소값: %d\n", minimum);
    printf("최대값: %d\n", maximum);

    return 0;
}