#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int numbers[], size_t numbers_len) {
    int max = numbers[0] * numbers[1];
    for (int i = 0; i < numbers_len; i++)
        for (int k = i+1; k < numbers_len; k++) 
        {
            if (numbers[i] * numbers[k] > max) 
            {
                max = numbers[i] * numbers[k];
            }
        }

    return max;
}