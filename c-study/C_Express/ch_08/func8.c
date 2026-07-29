#include <stdio.h>

double ctof(double c_temp) {
    return 9.0 / 5.0 * c_temp + 32.0;
}

double ftoc(double f_temp) {
    return (f_temp - 32.0) * 5.0 / 9.0;
}

void print_Menu() {

    printf("================\n");
    printf("'c':섭씨온도에서 화씨온도로 변환\n");
    printf("'f':화씨온도에서 섭씨온도로 변환\n");
    printf("'q':종료\n");
    printf("================\n");
}

int main(void) {

    char option;
    double temp;

    while(1) {
        print_Menu();
        printf("선택하시오\n");
        scanf(" %c", &option);

        if (option == 'q') {
            printf("종료합니다.\n");
            break;
        }
        else if (option == 'c') {
            printf("섭씨온도\n");
            scanf("%lf",&temp);
            printf("화씨온도: %lf\n", ctof(temp));
        }
        else if (option == 'f') {
            printf("화씨온도:\n");
            scanf("%lf", &temp);
            printf("섭씨온도: %lf\n", ftoc(temp));
        }
        else {
            printf("잘못된 선택입니다.\n");
        }
        }
    return 0;
    }
