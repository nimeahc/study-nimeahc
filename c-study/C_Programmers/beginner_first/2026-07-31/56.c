#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* rsp) {
    int len = strlen(rsp); 
    char* answer = (char*)malloc(sizeof(char)*(len+1));
    for (int i = 0; i < len; i++) {
        switch(rsp[i]) {
            case '2' :
                answer[i] = '0';
                break;
            case '0' :
                answer[i] = '5';
                break;
            case '5' :
                answer[i] = '2';
                break;
        }
    }
    answer[len] = '\0';
    return answer;
}