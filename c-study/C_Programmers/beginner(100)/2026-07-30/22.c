#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int count = 0;
    for (int i = 1; i<=n; i++) {
        if (n % i == 0) {
            count += 1;
        }
    }
        
    return count;
}