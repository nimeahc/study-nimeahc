#include <stdio.h>
#include <math.h>
#include <time.h>

int main(void) {

    time_t start,end; // time_t 는 unsigned long 과 동일함
    start = time(NULL);
    printf("10초가 되면 엔터키를 누르시오 \n");
    while(1) {
        if (getchar()) {break;}
    }

    printf("종료되었습니다\n");
    end = time(NULL);
    int result = end - start;
    printf("경과된 시간은 %d 입니다.\n", result);
    if (result - 10 > 1) {printf("100점\n");}
    else if (result - 10 > 2) {printf("90점\n");}
    else {printf("점수 없음\n");}

    return 0;
}
