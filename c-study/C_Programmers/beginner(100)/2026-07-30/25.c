#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string) {
    int len = strlen(my_string);
    char* answer = (char*)malloc(sizeof(char)*(len+1));

    int k=0;
    for (int i=0; i<len; i++) {
        char c = my_string[i];
        if (c !='a' && c!='e' && c!='i' && c!='o' && c!='u')
            {answer[k] = c;
                k++;}
    
    }
    answer[k] = '\0';
    return answer;
}

/*

char* solution(const char* my_string) {
    int len = strlen(my_string);
    char* answer = (char*) malloc(sizeof(char) *(len+1) );
    int k = 0;

    for (int i = 0; i < len; i++) {
        switch(my_string[i]) {
        case 'a':
        case 'i':
        case 'e':
        case 'o':
        case 'u':
            k++;
            break;
        default:
            answer[i-k] = my_string[i];
        }
    }

    answer[len-k] = '\0';
    return answer;
}

*/