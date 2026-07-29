#include <stdio.h>

int main() {

    int i = 3;

    while (i) { // (i != 0) 과 같은 의미다. 

        printf("%d은 참입니다.\n", i); 
        i--;

    }

    printf("%d는 거짓입니다. \n", i); // 0은 거짓, 나머지는 참 
    return 0; 
}