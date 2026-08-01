#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// box_len은 배열 box의 길이입니다.
int solution(int box[], size_t box_len, int n) {
    int garo = box[0] / n ;
    int sero = box[1] / n;
    int height = box[2] / n;
    int answer = garo * sero * height;
    return answer;
}