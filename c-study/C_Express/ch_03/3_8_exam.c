//scanf() 는 키보드로부터 입력된 데이터를 변수에 저장하는 함수 
// scanf("%d", &변수명); 

#include <stdio.h>

int main(void) {
    int number = 0;
    float grade = 1.0;
    
    float ratio = 0.0; 
    scanf("%f", &ratio);
    double scale = 0.0;
    scanf("%lf" , &scale); //double은 float보다 더 많은 비트 사용

    scanf("%d %f", &number, &grade); 
}