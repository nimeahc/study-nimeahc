#include <stdio.h>

int main () {

    char letter;

    while (1) { // while(1)은 루프랑 비슷. 
        printf("소문자 입력:\n");
        scanf(" %c", &letter);

        if (letter == 'Q') {break;} // Q면 중단 
        if (letter<'a' || letter > 'z') {continue;} //소문자 x
        
        letter -= 32; // 소문자를 대문자로 변경함
        printf("변환된 대문자 %c\n", letter);
   
    }

    return 0; 
}