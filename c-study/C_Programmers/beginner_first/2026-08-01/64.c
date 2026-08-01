#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

/*
정렬 후 문자열 비교 
*/

int cmp(const void*a, const void*b) {
    return *(char*)a - *(char*)b;
}

int solution(const char* before, const char* after) {

    int len= strlen(before);
    char* b = (char*)malloc(sizeof(char)*(len+1));
    char* a = (char*)malloc(sizeof(char)*(len+1));
    
    strcpy(b, before);
    strcpy(a, after);
        
    qsort(b, len, sizeof(char), cmp);
    qsort(a, len, sizeof(char), cmp);
    
    if (strcmp(b,a) == 0) return 1;
    else return 0;
}
