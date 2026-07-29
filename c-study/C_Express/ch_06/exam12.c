/*0~99 난수 만드는 법 : rand() % 100  ? 0~99사이 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    int num, user;
    srand(time(NULL));
    num = rand() % 100;

    printf("숫자 입력: \n");
    scanf("%d", &user);

    printf("복권번호 : %d\n", num); 

    if (num == user) {printf("상금 100만원 \n");}
    else {printf("상금은 없습니다.\n");}

    return 0;


 }


