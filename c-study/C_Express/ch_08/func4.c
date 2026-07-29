#include <stdio.h>

void happyBirthday(int n) {

    printf("생일 축하합니다.\n");
    printf("사랑하는 친구야!\n");
    printf("%d의 생일을 축하해\n", n);
}

int main(void) {

    int age;
    printf("나이 입력: \n");
    scanf("%d", &age);
    happyBirthday(age);
    return 0;
}