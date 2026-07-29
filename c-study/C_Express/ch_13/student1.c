#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

struct student {
    int number;
    char name[10];
    double grade;
}; // 구조체 student 선언함 

int main(void) {
    struct  student s; // 구조체 student 의 변수 s가 선언됨.

    s.number = 20230001;
    strcpy(s.name, "홍길동"); //문자열은 strcpy을 쓰자.
    s.grade = 4.3;

    printf("학번: %d\n", s.number);
    printf("이름: %s\n", s.name);
    printf("학점: %.2lf\n", s.grade); 

    return 0;

}