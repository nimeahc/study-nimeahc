//난수 함수 

#include <stdio.h>
#include <stdlib.h> //rand()의 원형 정의

int main(void)
{
    for (int i=0; i<6; i++) {
        printf("%d ", 1+(rand()%45)); // 1부터 45까지
    }
    printf("\n");
    return 0;
}

/*

rand() : 무제한
rand() % 45 : 0~44
1 + ( rand () % 45) = 1~45 
a + ( rand() %(b-a+1)) = a부터 b까지 = a포함, b포함하는 구간. 
*/