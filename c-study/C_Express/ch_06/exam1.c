#include <stdio.h>

int main(void) {

    int x, y;
    printf("정수 입력: \n");
    scanf("%d %d", &x, &y);

    if (x%y == 0){
        printf("약수입니다.\n");
    }

    return 0; 
}