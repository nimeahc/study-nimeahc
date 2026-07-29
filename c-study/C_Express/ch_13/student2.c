#include <stdio.h>


struct student {
    int number;
    char name[10];
    double grade;
};

int main(void)
{
    struct student s; // 구조체 변수 정의

    printf("학번:\n");
    scanf("%d", &s.number);
    printf("이름:\n");
    scanf("%s", s.name);
    printf("학점:\n");
    scanf("%lf", &s.grade);

    printf("학번 = %d\n", s.number);
    printf("이름 = %s\n", s.name);
    printf("학점 = %lf\n", s.grade);

    return 0;
}