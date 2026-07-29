#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {

    int user, computer;
    srand(time(NULL));

    computer = rand() % 3 + 1; // 1~3 사이 난수 

    printf("하나 선택: \n");
    scanf("%d", &user );

    switch(computer) {
        case 1 :
            printf("컴퓨터는 가위를 선택했습니다. \n");
            break;
        case 2 :
            printf("컴퓨터는 바위를 선택했습니다. \n");
            break;
        case 3 :
            printf("컴퓨터는 보 를 선택했습니다. \n");
            break; 
    }

    if (user == computer) {
        printf("비겼습니다. \n");
    }

    else if ((user == 1 && computer == 3) ||
            (user == 2 && computer == 1) ||
            (user == 3 && computer == 2)) {
                printf("사용자가 이겼다.\n");
            }
    else {
        printf("컴퓨터가 이겼다.\n");
    }

    return 0; 
}