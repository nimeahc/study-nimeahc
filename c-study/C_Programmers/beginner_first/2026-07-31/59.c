#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int count(int n) {
    int k = 0;
    for (int i=1; i<=n; i++) {
        if (n % i == 0) k++;
    }
    return k;
}
int solution(int n) {
    int answer = 0;
    
    for (int i=1; i<=n; i++) {
        if (count(i) >= 3) {
            answer++;
        }
    }
    return answer;
}