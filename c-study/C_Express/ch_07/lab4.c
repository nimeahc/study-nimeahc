#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int x,y,answer,i;
    srand((unsigned)time(NULL));

    for (i = 0; i<10; i++) {

        x = rand() % 10;
        y = rand() % 10;
        printf("%d+%d=",x,y);
        scanf("%d", &answer);

        if(x+y==answer) {printf("정답\n");}
        else{
            printf("오답\n");
        }

        return 0; 
    }
}