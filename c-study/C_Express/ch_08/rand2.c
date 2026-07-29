#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MAX = 45; 
    int i;
    srand( (unsigned)time(NULL)); //실행할때마다 다른 난수가 생성됨

    for (i=0; i<6; i++) {
        printf("%d ", 1+rand()%MAX );
    }
    return 0; 
}