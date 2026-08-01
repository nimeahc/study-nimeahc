#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int money) {
    int* answer = (int*)malloc(sizeof(int)*2); // int형 2개 
    answer[0] = money / 5500;
    answer[1] = money % 5500;
    return answer;
}

