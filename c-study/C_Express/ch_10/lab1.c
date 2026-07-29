#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 6

int main(void) 
{
    int i;
    int freq[SIZE] = {0};
    srand((unsigned)time(NULL));

    for (i=0; i<1000; i++) {
        ++freq[ rand() % 6 ];
    }

    printf("===================\n");
    printf("숫자\t빈도\n");
    printf("===================\n");

    for (i=0; i<SIZE; i++) {
        printf("%d\t%d\n", i, freq[i]);
    }

    return 0;
}