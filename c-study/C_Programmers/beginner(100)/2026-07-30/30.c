#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    int k=0;
    for (int i = 1; i<=n; i++) {
        if (n%i == 0) {k++; }}
    int* answer = (int*)malloc(sizeof(int) *k);
    
    int j = 0;
    for (int i = 1; i <= n; i++) 
    { 
        if (n%i == 0) 
        {answer[j] = i;
            j++;}
    }

    return answer;
}