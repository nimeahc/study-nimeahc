#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// dot_len은 배열 dot의 길이입니다.
int solution(int dot[], size_t dot_len) {
    if (dot[0] > 0) {
        if (dot[1] > 0) {return 1;}
        else {return 4;}
    }
    else {
        if (dot[1] > 0) {return 2;}
        else {return 3;}
    }
}

/*
ans[2][2] = {(3,2), (4,1)}; >> 이중 
return ans[dot[0] > 0][dot[1] > 0]; >> 참이면 1, 거짓이면 0 인 것을 이용해서 
*/