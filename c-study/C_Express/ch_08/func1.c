#include <stdio.h>

void print_stars() {

    for (int i=0; i<5; i++){
            printf("*");
        }
}

int main(void){

    print_stars();
    printf("hello world!\n");
    print_stars();

    return 0;

}

//함수는 main안이 아니라 밖에서 정의해야 함 