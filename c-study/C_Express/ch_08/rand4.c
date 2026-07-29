#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

void disp_car(int car_number, int distance) 
{
    int i;
    printf("car%d:", car_number);
    for (i=0; i < distance/10; i++)
    {
        printf("*");
    }
    printf("\n");
}

int main(void){

    srand((unsigned)time(NULL));
    int i;
    int car1_dist = 0;
    int car2_dist = 0;

    for (i=0; i<20; i++){
        system("CLS"); //화면을 지운다.
        car1_dist += rand() % 100; 
        car2_dist += rand() % 100;
        disp_car(1, car1_dist);
        disp_car(2, car2_dist);
        Sleep(1000); // 1000밀리초 동안 잠재움.
    }

    return 0; 
}