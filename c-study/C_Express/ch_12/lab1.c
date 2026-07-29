#include <stdio.h>
#include <ctype.h>

int count_word(char *s);
int main(void)
{
    int counter = count_word("the c book...");
    printf("단어의 개수 : %d\n", counter);
    return 0;
}

int count_word(char *s) {
    int i;
    int word_counter = 0;
    int wait = 1;

    for (i=0; s[i] != '\0'; i++) {
        if ( isalpha(s[i])) {
            if(wait == 1) {
                word_counter++;
                wait = 0;
            }
        }
        else {
            wait = 1;
        }
    }
    return word_counter;
}