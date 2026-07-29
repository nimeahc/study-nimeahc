#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979

int menu(void) {
    int n;
    printf("1. 팩토리얼\n");
    printf("2. 싸인\n");
    printf("3. 로그(base 10)\n");
    printf("4. 제곱근\n");
    printf("5. 순열\n");
    printf("6. 조합\n");
    printf("7. 종료\n");
    scanf("%d", &n);
    return n;
}

long long fac(long long n) {
    long long i, result = 1;
    for (i=1; i<=n; i++) {
        result *= i;
    }
    return result;
}

void factorial() {
    long long n;
    printf("정수 입력:\n");
    scanf("%lld", &n);
    printf("결과 : %lld \n", fac(n));
}


void sine() {

    double a, result;
    printf("각도 입력: \n");
    scanf("%lf", &a);
    result = sin(a*PI / 180.0);
    printf("결과: %lf \n", result);
}

void logbase10() {
    double a, result;
    printf("실수값 입력:\n");
    scanf("%lf", &a);
    if (a <= 0.0) {printf("범위 오류 \n");}
    else {
    result = log10(a);
    printf("결과 : %lf\n", result);
    }
}

void cal_sqrt() {

    double a, result;
    printf("실수값 입력: \n");
    scanf("%lf", &a);
    result = sqrt(a);
    printf("결과 : %lf", result);
}

void npr() {

    int n, r;
    long long result;
    printf("n과 r 입력: \n");
    scanf("%d %d", &n, &r);
    result = fac(n) / fac(n-r);
    printf("결과: %lld\n", result);
}

void combination() {

    int n, r;
    long long result;
    printf("n과 r 입력: \n");
    scanf("%d %d", &n, &r);
    result = fac(n) / (fac(n-r) * fac(r));
    printf("결과: %lld\n", result);
}

int main(void) {
    while(1) {
        switch (menu()) {
            case 1: factorial(); break;
            case 2: sine(); break;
            case 3: logbase10(); break;
            case 4: cal_sqrt(); break;
            case 5: npr(); break;
            case 6: combination(); break;
            case 7: printf("종료\n"); return 0;
            default: printf("잘못된 선택입니다.\n"); break;
        }
    }

    return 0;
}