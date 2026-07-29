#include <Stdio.h>

int main() {

    int num1, num2, num3;
    int result1, result_final;
    
    printf("정수 3개를 입력하시오: \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    result1 = (num1 > num2)? num1 : num2;
    result_final = (result1 > num3)? result1 : num3;

    printf("최댓값은 %d입니다.", result_final);

    return 0; 
}