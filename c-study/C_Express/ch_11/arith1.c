#include <stdio.h>

int main(void)
{
    char *pc = NULL;
    int *pi = NULL;
    double *pd = NULL;

    pc = (char *)10000; // 주소가 10000부터 시작함
    pi = (int *)10000; 
    pd = (double *)10000;
    
    printf(" pc=%u,\tpc+1=%u,\tpc+2=%u\n", pc, pc+1,pc+2);
    printf(" pi=%u,\tpi+1=%u,\tpi+2=%u\n", pi, pi+1, pi+2);
    printf(" pd=%u,\tpd+1=%u,\tpd+2=%u\n", pd, pd+1, pd+2);

    return 0;
}