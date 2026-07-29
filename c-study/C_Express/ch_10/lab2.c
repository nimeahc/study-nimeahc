#include <stdio.h>

#define SEAT 10

char print_menu() {
    char c;
    printf("좌석을 예약하시겠습니까? (y 또는 n)\n");
    scanf(" %c", &c);
    return c;
}


void PRINTSEAT() {
    printf("------------------------\n");
    printf("1\t2\t3\t4\t5\t6\t7\t8\t9\t10\n");
    printf("------------------------\n");

}

int main(void)
{

    int i;
    int reserve[SEAT] = {0};
    int user;

    while(1) {
        char result = print_menu();
        if (result == 'n') 
            break;
        PRINTSEAT();
        for (i = 0; i<SEAT; i++) {
            printf("%d\t", reserve[i]);
        }
        printf("\n");

        printf("몇 번째 좌석을 예약하시겠습니까?\n");
        scanf("%d", &user);
        
        if (reserve[user-1] == 0) {
            reserve[user-1] = 1;
            printf("%d자리로 예약되었습니다.\n", user);
            }
        else {
            printf("%d자리는 이미 예약된 자리입니다.\n", user);
        }

        }
    
    return 0;

    }
