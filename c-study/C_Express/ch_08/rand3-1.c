#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rsp(void);
int user(void);
int main(void)
{
    srand((unsigned)time(NULL)); // srand는 rand 쓰기 전에 항상.
    int users = user();
    int computer = rsp();


    if ( (computer == 1 && users == 3)||
        (computer == 2 && users == 1) ||
        (computer == 3 && users == 2) ) {
            printf("사용자 승리\n");
        }
    else if (computer == users) {printf("비겼습니다.\n");}
    else {
        printf("컴퓨터 승리\n");
    }

    return 0; 

}

int user(void) {
    int i;
    printf("1 : 묵, 2: 가위, 3: 보 \n");
    scanf("%d", &i);
    return i;
}

int rsp(void){
    int n;
    n = 1 + (rand() % 3); 
    return n;
}