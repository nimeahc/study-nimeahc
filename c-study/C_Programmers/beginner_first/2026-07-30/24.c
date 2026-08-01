#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int maximum = 0;
    for (int i = 0; i < numbers_len-1; i++) {
        for (int j = i+1; j < numbers_len; j++ ) {
            if (numbers[i] * numbers[j] > maximum)
                maximum = numbers[i] * numbers[j];
        }
    }
    return maximum;
}