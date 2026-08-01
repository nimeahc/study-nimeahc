#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* str1, const char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    for (int i = 0; i <= len1 - len2; i++) {
        int match = 1;
        for (int j = 0; j < len2; j++) {
            if (str1[i+j] != str2[j]) {
                match = 0;
                break;
            }
        }
        if (match == 1) return 1;  
    }
    return 2;                      
}

/*
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* str1, const char* str2) {
    if (strstr(str1, str2) != NULL) return 1;
    else return 2;
}

*/