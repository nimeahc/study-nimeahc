#include <stdio.h>

int main() {
    int score;

    printf("점수 입력: ");
    scanf("%d", &score);

    if (score >= 0 && score <= 100) {
        if (score >= 90) {
            printf("A학점\n");
        } else if (score >= 80) {
            printf("B학점\n");
        } else if (score >= 70) {
            printf("C학점\n");
        } else {
            printf("F학점\n");
        }
    } else {
        printf("잘못된 점수입니다.\n");
    }

    return 0;
}
