#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int* solution(int numbers[], size_t numbers_len, int num1, int num2) {
    int len = num2 - num1 +1;
    int* answer = (int*)malloc(sizeof(int)*(len+1));
    int j = 0;
    for (int i = num1; i <= num2; i++) {
        answer[j] = numbers[i];
        j++;
    }
    answer[len] = '\0';
    return answer;
}