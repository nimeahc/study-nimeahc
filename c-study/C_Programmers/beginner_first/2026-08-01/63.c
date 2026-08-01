#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int cmp(const void*a, const void*b) {
    return *(int*)b - *(int*)a;
}
// emergency_len은 배열 emergency의 길이입니다.
int* solution(int emergency[], size_t emergency_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* count = (int*)malloc(sizeof(int)*emergency_len);
    int* answer = (int*)malloc(sizeof(int)*emergency_len);
    
    for(int i = 0; i < emergency_len; i++) {
        count[i] = emergency[i];
    }
    qsort(count, emergency_len, sizeof(int), cmp);
    
    for (int i=0; i<emergency_len; i++) {
        for(int j=0; j<emergency_len; j++) {
            if ( emergency[i] == count[j] ) {
                answer[i] = j+1;
                break;
            }
        }
    }
    return answer;
}

/*
[순위 매기기 트릭]
answer[i] = 1;
for (j = 0 to n) {
    if (arr[i] < arr[j]) answer[i]++;
}
→ 정렬 없이 각 원소의 순위 계산

int* solution(int emergency[], size_t emergency_len) {
    int* answer = (int*)malloc(sizeof(int)*emergency_len);

    for(int i=0;i<emergency_len;i++){
        answer[i] = 1;
        for(int j=0;j<emergency_len;j++){
            if(emergency[i]<emergency[j]) answer[i]++;
        }
    }
    return answer;
}

*/