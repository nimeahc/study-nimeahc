#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int num = (int) (n/10);
    return 12000*n + (k-num) * 2000;
}