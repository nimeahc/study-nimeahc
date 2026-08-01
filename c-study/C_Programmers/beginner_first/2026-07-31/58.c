#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int age) {
    char agestr[5];
    sprintf(agestr, "%d", age);
    int len = strlen(agestr);
    char* answer = (char*)malloc(sizeof(char)*(len+1));
    for (int i=0; i<len; i++) {
        answer[i] = agestr[i] -'0' + 'a';    
    }

    answer[len] = '\0';
    return answer;
}