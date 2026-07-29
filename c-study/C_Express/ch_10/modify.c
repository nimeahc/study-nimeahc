#include <stdio.h>

#define SIZE 7

void print_array(int a[], int size);
void modify_array(int a[], int size);

int main(void)
{
    int list[SIZE] = { 1,2,3,4,5,6,7};

    print_array(list, SIZE);
    modify_array(list, SIZE);
    print_array(list, SIZE);   // 원본 배열도 수정됨 

    return 0;
}

void print_array(int a[], int size) {
    int i;

    for(i = 0; i<size; i++) {
        printf("%3d ", a[i]);
    }
    printf("\n");
}

void modify_array(int a[], int size) {
    int i;
    for(i = 0; i<size; i++) {
        ++a[i];
    }
}