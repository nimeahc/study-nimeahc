#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int cmp(const void*a, const void*b) {
    return *(char*)a - *(char*)b;
}
char* solution(const char* my_string) {
    int len = strlen(my_string);    
    char* answer = (char*)malloc(sizeof(char)*(len+1));
    strcpy(answer, my_string);
    for (int i=0; i<len; i++) 
    { if (answer[i] >= 'A' && answer[i]<='Z')
            {answer[i] = tolower(answer[i]);}  
    }
    qsort(answer, len, sizeof(char), cmp);
    return answer;
}