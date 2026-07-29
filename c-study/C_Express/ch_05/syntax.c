#include <stdio.h>

int main() {

    int i;
    double f;

    f = 5/4; // int끼리 계산이므로 1이 됨 
    printf("%f\n", f); // double이므로 1.0 으로 저장됨 

    f = (double)5/ 4; // 5.0나누기 4가 됨
    printf("%f \n", f);

    f = 5.0 / 4 ;// 하나가 double이라서 4도 자동으로 double로 형변환됨
    printf("%f \n", f);

    f = (double)5 / (double) 4;  // 5.0 나누기 4.0과 같음 
    printf("%f \n", f); 

    i = 1.3 + 1.8 ;// int이므로 3이 저장됨
    printf("%d\n", i);

    i = (int)1.3 + (int)1.8 ; // 1+1이 됨 
    printf("%d\n", i); //출력 2

    return 0;
}