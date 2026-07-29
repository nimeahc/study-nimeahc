#include <stdio.h>

int get_integer() {

    int value;
    printf("정수입력:\n");
    scanf("%d", &value);
    return value;
}

int sum_integer(int x, int y) {

    return x+y;
}

int main(void){

    int num1 = get_integer();
    int num2 = get_integer();
    int result = sum_integer(num1, num2);

    printf("%d", result);
    return 0;
}