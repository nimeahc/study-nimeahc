#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, int num1, int num2) {
    int len = strlen(my_string);
    char* answer = (char*)malloc(sizeof(char)*(len+1));
    char temp;
    
    strcpy(answer, my_string);
    
    temp = answer[num1];
    answer[num1] = answer[num2];
    answer[num2] = temp;
    return answer;
}