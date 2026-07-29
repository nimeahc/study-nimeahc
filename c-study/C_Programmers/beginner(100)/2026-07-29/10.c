#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int slice, int n) {
    int answer = 0;
    if (n % slice == 0) {answer = n / slice;}
    else {answer = n / slice + 1;}
    return answer;
}
/* 
int solution(int slice, int n) {
    int answer = n/slice;
    answer += (n%slice > 0) ? 1 : 0;
    return answer;
}

*/