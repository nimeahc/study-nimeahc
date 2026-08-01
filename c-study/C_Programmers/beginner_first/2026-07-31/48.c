#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void*a, const void*b) {
    return *(int*)a-*(int*)b; // 오름차순 정렬 <-> 내림차순이면 return *(int*)b-*(int*)a;
}

int* solution(const char* my_string) {
    int len = strlen(my_string);
    int count = 0;
    for (int i=0; i<len; i++)
    {
        if (my_string[i] >= '0' && my_string[i] <= '9') {
            count++;
        }
    }
    int* answer = (int*)malloc(sizeof(int)*count);
    
    int k = 0;
        for (int i=0; i<len; i++)
    {
        if (my_string[i] >= '0' && my_string[i] <= '9') {

            answer[k] = my_string[i] - '0'; 
            k++;
        }
    }
    qsort(answer, count, sizeof(int), cmp); // qsort(정렬할 배열, 배열의 길이, 배열의 요소 크기, 비교 함수 (필수))
    return answer;
}