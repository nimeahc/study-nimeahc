#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    int answer = ((double)num1 / (double)num2 )* 1000; // 형변환해야 정수부분을 
    return answer;
}