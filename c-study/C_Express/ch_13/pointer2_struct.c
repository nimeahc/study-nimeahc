#include <stdio.h>

struct date {
    int month;
    int day;
    int year;
};

struct student {
    int number;
    char name[20];
    double grade;
    struct date *dob;
};

int main(void) 
{
    struct date d = {3, 20, 2000};
    struct student s = {1, "kim", 4.3};

    s.dob = &d;

    printf("학번=%d, 이름=%s, 학점=%lf\n", s.number, s.name, s.grade);
    printf("생년월일 : %d년 %d월 %d일\n", s.dob->year, s.dob->month, s.dob->day);

    return 0;
}