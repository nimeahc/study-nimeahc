#include <stdio.h>

int main() {

    int month, days;

    printf("달 입력: \n");
    scanf("%d", &month);

    switch(month) {
        case 2:
            days = 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30; //4,6,9,11 중 하나만 해당되도 여기로옴
            break;
        default:
            days = 31; // 나머지 숫자는 여기로 옴 
            break;

    }
    printf("%d월의 일수는 %d", month, days);
    return 0; 
}