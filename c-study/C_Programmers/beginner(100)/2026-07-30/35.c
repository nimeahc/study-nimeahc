#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int n) {
    char num[20];
    sprintf(num, "%d", n); // n을 문자열로 변환해서 num에 
    int len = strlen(num);
    
    int answer = 0;
    for (int i=0; i<len; i++) {
        answer += num[i] - '0';
    }
    return answer;
}

/*

int solution(int n) {
    int answer = 0;
    while (n > 0) {
        answer += n % 10;   
        n /= 10;           
    }
    return answer;
}

    */