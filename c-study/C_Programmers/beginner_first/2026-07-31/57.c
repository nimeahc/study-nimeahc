#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//최대공약수 gcd 
int gcd(int a, int b) {
    while (b != 0) {
        int r = b;
        b = a % b;
        a = r;
    }
    return a;
}

// 최소공배수 lcm
int lcm(int a, int b) {
    return a / gcd(a,b) * b;
}

int solution(int n) {
    return lcm(6, n)/ 6;
}