#include <stdio.h>

int get_integer() {

    int value;
    printf("정수입력\n");
    scanf("%d", &value);
    return value;
}

int main(void) {

    int result = get_integer(); // 이렇게 반환값을 써줘야됨. 
    printf("%d", result); 
    return 0;
}