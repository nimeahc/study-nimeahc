#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h> 

int solution(int num, int k) {
    char numch[10];
    sprintf(numch, "%d", num);
    int len = strlen(numch); 
    for (int i=0; i < len; i++)
    {
        if (numch[i] == k + '0') {
            return i+1;
        }
    }
    return -1 ;
}