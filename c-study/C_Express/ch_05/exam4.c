#include <stdio.h>

int main() {

    const double INCH = 2.54;
    int height;
    double middle, peet, inch;

    printf("키: \n");
    scanf("%d", &height);

    middle = height / INCH;
    peet = (int)(middle / 12);  //나눈 값의 정수부를 취하는 것  
    inch = middle - peet * 12; //나머지 연산자는 정수형끼리만 가능함

    printf("%dcm는 %.0lf피트 %.2lf인치입니다.", height, peet, inch);

    return 0;


}