#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h> 

/*
이중 반복문 사용 :
i=1이면 j는 0까지
i=2이면 j는 0,1만 > 중복아니면 2번째자리는 그대로, 중복이면 x 
*/

char* solution(const char* my_string) {
    int len = strlen(my_string);
    char* answer = (char*)malloc(sizeof(char)*(len+1));
    int k = 0;
    
    for (int i=0; i<len; i++) 
    {
        int flag = 0;
        for (int j=0; j<i; j++)
        {
            if (my_string[i] == my_string[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            answer[k] = my_string[i];
            k++;
        }
    }
    answer[k] = '\0';
    return answer;
}