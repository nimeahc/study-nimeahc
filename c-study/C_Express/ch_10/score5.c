#include <stdio.h>
#define SIZE 5

int main(void)
{

    int i;
    int score[SIZE] = {31, 63,62,2,45};

    for (i=0; i < SIZE; i++) {
        printf("score[%d]=%d\n", i, score[i]);
    }

    return 0; 
}
