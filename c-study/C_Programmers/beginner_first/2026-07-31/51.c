#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* cipher, int code) {
    int len = strlen(cipher) / code ;
    int k = 0;
    char* answer = (char*)malloc(sizeof(char)*(len+1));
    for (int i = 1; i <=len; i ++ ) {
        answer[k] = cipher[i*code-1];
        k++;
    }
    answer[len] = '\0';
    return answer;
}