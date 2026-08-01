#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int hp) {
    int a = hp / 5 ;
    int b = (hp-5*a) / 3;
    int c = (hp-5*a-3*b);
    int answer = a+b+c;
    return answer;
}

/*

int solution(int box[], size_t box_len, int n) {
    int answer = 1;

    for(int i=0; i < 3; i++){
        answer *= (box[i] / n);
    }

    return answer;
}
*/