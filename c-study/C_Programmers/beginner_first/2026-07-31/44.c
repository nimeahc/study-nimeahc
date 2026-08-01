#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int array[], size_t array_len) {
    // 오름차순 정렬 (버블 정렬)
    for (int i = 0; i < array_len; i++) {
        for (int j = i + 1; j < array_len; j++) {
            if (array[i] > array[j]) {
                // 두 값 교환
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    
    return array[array_len / 2];
}

/*
int compare(const void *a, const void *b)    // 오름차순 비교 함수 구현
{
    int num1 = *(int *)a;    // void 포인터를 int 포인터
    int num2 = *(int *)b;   

    if (num1 < num2)    
        return -1;     

    if (num1 > num2)  
        return 1;      

    return 0;  
}

int solution(int array[], size_t array_len) {
    int answer = 0;
    qsort(array, array_len, sizeof(int), compare);
    answer = array[array_len / 2];
    return answer;
}
*/