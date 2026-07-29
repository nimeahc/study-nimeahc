#include <stdio.h>

int main(void)
{
    char name[100];
    char address[100];

    printf("이름 입력:\n");
    gets_s(name, sizeof(name));
    printf("주소 입력:\n");
    gets_s(address,sizeof(address));

    printf("%s에 사는 %s씨\n", address,name);
    return 0;
}