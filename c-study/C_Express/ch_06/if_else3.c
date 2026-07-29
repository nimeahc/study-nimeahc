#include <stdio.h>

int main() {

    int year;

    printf("연도 입력: \n");
    scanf("%d", &year);

    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) 
        printf("윤년입니다. \n");
    
    else
        printf("윤년아님");

    return 0; 
}