#include <stdio.h>

typedef struct {
    int number;
    char name[20];
    double grade;
} Student;

int main(void) {
    Student s = {1, "김철수", 4.3};
    Student class[30];
    
    void print_student(Student *p);
    print_student(&s);
    return 0;
}

void print_student(Student *p) {
    printf("%s\n", p->name);
}
