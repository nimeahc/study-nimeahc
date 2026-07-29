#include <stdio.h>

int main() {

    int year, result;

    printf("연도: \n");
    scanf("%d", &year);

    result = (year % 4 == 0 ) && (year % 100 != 0) || (year % 400 == 0);
    printf("윤년 여부 : %d", result);

    return 0; 
}