#include <stdio.h>

int main(void) {

    int time, age, charge;

    printf("시간과 나이 입력: \n");
    scanf("%d %d", &time, &age);

    if (time < 17) {
        if (age<=12 || age >= 65) {
            printf("요금 : 25,000\n");
        }
        else {
            printf("요금 : 34,000 \n");
        }
    }
    else {
        printf("요금 : 10,000\n");
    }

    return 0;
}