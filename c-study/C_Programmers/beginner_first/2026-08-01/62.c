#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int count_k(int n, int k) {
    int con = 0;
    char nstr[20];
 
    sprintf(nstr, "%d", n);
    int digits = strlen(nstr);
 
    for (int i=0; i<digits; i++) {
        if (nstr[i] == k + '0') {con++;}
    }
 
    return con;
}
int solution(int i, int j, int k) {
    int answer=0;
    for (int n=i; n<=j; n++) {
        answer += count_k(n,k);
    }
 
    return answer;
}