#include <stdio.h>
#define SIZE 3 

struct student {
    int number;
    char name[20];
    double grade;
};

int main(void) {
    struct student list[SIZE];
    int i;

    for (i=0; i<SIZE; i++) {
        printf("학번 입력:\n");
        scanf("%d", &list[i].number);
        printf("이름 입력: \n");
        scanf("%s", list[i].name);
        printf("학점 입력:\n");
        scanf("%lf", &list[i].grade);
    }

    for (i=0; i<SIZE; i++) {
        printf("이름:%s\n학번:%d\n학점:%.2lf\n",list[i].name, list[i].number, list[i].grade);
    }

    return 0;
}