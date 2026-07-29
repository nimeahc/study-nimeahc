/* XOR을 이용한 암호화 문제 */

#include <stdio.h>

int main(void) {
    char data = 'a';
    char key = 0xff;
    char encrpted_data, orig_data;

    printf("원래 문자: %c \n", data);
    encrpted_data = data ^ key; // ^는 XOR
    printf("암호화 문자: %c \n", encrpted_data);
    orig_data = encrpted_data ^ key ;
    printf("복원된 문자 : %c \n", orig_data);

    return 0;

}