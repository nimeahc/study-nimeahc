#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int sides[], size_t sides_len) {
    int max = 0;
    int num = 0;
    int sum = 0;
    
    for (int i = 0; i < 3; i++) {
        if (sides[i] > max) {  
            max = sides[i];
            num = i;
        }
    }
    
    for (int i = 0; i < 3; i++) {
        if (i != num) {             
            sum += sides[i];
        }
    }
    
    if (sum > max) return 1;
    else return 2;
}

/*

int solution(int sides[], size_t sides_len) {
    int answer = 0;
    int maxidx;
    maxidx = sides[0] < sides[1] ? ((sides[1] < sides[2]) ? 2:1) : ((sides[0] > sides[2]) ? 0:2);
    answer = (sides[0] + sides[1] + sides[2] - 2*sides[maxidx]) <= 0 ? 2:1;
    return answer;
}*/

/*

int solution(int sides[], size_t sides_len) {
    int total = sides[0] + sides[1] + sides[2];
    int max = sides[0];
    if (sides[1] > max) max = sides[1];
    if (sides[2] > max) max = sides[2];
    
    int rest = total - max;
    
    if (max < rest) return 1;
    else return 2;
}
*/