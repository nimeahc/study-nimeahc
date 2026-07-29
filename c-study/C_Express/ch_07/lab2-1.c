#include <stdio.h>

int main() {

    int bacteria, hours, i;

    printf("초기 세균 수 : \n");
    scanf("%d", &bacteria);

    printf("배양시간: \n");
    scanf("%d", &hours);

    for (i = 1; i <= hours; i++) {
        bacteria = bacteria * 4;
        printf("%d시간 후 %d마리\n", i, bacteria);
    }

    printf("최종 결과 : %d", bacteria);
    return 0; 

}