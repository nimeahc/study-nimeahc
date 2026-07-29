#include <stdio.h>

struct student {
    int number;
    char name[20];
    double grade;
};

int main(void)
{
    struct student s = {1, "홍길동", 4.3};
    struct student *p;
    p = &s;

    printf("학번=%d, 이름=%s, 성적=%lf", s.number, s.name, s.grade);
    printf("학번=%d, 이름=%s, 성적=%lf", p->number, p->name, p->grade);

    return 0;
}