#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int order) {
    int sum = 0;
    
    char ord[10];
    sprintf(ord, "%d", order);
    int len = strlen(ord);
    
    for (int i=0; i<len; i++) {
        if (ord[i] == '3' || ord[i] == '6' || ord[i] == '9') {
            sum++;
        }
    }
    
    return sum;
}

/*

int solution(int order) {
    int answer = 0;
    while(order > 0)
    {
        if(order % 10 == 3 || order % 10 == 6 || order % 10 == 9)
            answer++;
        order/=10;
    }    
    return answer;
}
*/