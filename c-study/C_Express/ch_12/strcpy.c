/*
char dst[6];
char src[6] = "hello";
strcpy(dst, src); // src를 dst로= dst가 spc가 됨 
strncpy(dst, src, n); // src를 dst로 n개 개수만큼 
strcat(dst, src); // dst 뒤에 src가 연결됨 
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char string[100];
    strcpy(string, "hello world from ");
    strcat(string, "뒤에 붙임 ");
    strcat(string, "또 뒤에 붙임");
    printf("%s", string);
    return 0;
}
