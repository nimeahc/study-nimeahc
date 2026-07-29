#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int price) {
    double discount = 0;
    if (price >= 500000) discount = 0.2;
    else if (price >= 300000) discount = 0.1;
    else if (price >= 100000) discount = 0.05;
    else discount = 0;
    
    int answer = price * (1-discount);
    return answer;
}