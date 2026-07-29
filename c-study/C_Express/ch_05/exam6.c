#include <stdio.h>
#include <math.h> //math 모듈 같은 것 

int main() {

    double x = 1.0 - 0.9;
    double y = 0.1 ;
    int result ;

    result = (fabs(x-y) < 0.00000001); // fabs: 절대값 
    // 참이므로 결과값은 1
    printf("(1.0-0.9)==0.1의 결과는 %d\n", result); 

    return 0;

}