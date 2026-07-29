#include <stdio.h>

#define TAX_RATE 0.2

int main(void) {

    const int MONTHS = 12;
    int m_salary, s_salary;

    printf("월급: \n");
    scanf("%d", &m_salary);

    s_salary = MONTHS * m_salary;
    printf("연봉: %d\n", s_salary);
    printf("세금 : %f\n", s_salary * TAX_RATE);

    return 0;


}