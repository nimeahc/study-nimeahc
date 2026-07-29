#include <stdio.h>

int main() {

    int money, change ;
    int price, c1000, c500, c100;

    printf("물건값: \n");
    scanf("%d", &price);

    printf("투입 금액: \n");
    scanf("%d", &money);

    change = money - price;

    c1000 = change / 1000;
    change = change % 1000;

    c500 = change / 500;
    change = change % 500;

    c100 = change / 100;
    change = change % 100;

    printf("천원권 %d, 오백원 %d, 백원 %d", c1000, c500, c100);
    
    return 0;
}