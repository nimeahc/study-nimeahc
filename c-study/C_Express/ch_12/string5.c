// 포인터

#include <stdio.h>

int main(void) {

    char *p = "HelloWorld";
    printf("%s\n", p);

    p = "Welcome to C"; // 가능
    printf("%s\n", p);

    p = "hi"; // 가능
    printf("%s\n", p);
    // 불가능 : strcpy(p, "hi")
    return 0;
    
}