#include <stdio.h>

int main(void) {

    int height, age;

    printf("키와 나이 입력 : \n");
    scanf("%d %d", &height, &age);

    if (height>=140 && age >= 10) {
        printf("타도 좋습니다.\n");
    }

    else {
        printf("죄송합니다. \n");
    }

    return 0; 
}