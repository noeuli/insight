#include <stdio.h>

// 재귀적으로 작성하기
int pay(int money, int bills[], int n)
{
    int count = 0, i, t;

    if (n == 1) {
        if (money % bills[0] == 0)
            return 1;
        else
            return 0;
    }

    t = money / bills[n-1];

    for (i=0; i<=t; i++)
        count += pay(money - bills[n-1]*i, bills, n-1);
    
    return count;
}

#define MAXN    500

int main()
{
    int num_bills, money, i;
    int bills[MAXN];

    printf("input number of bills(0 for exit): ");
    scanf("%d", &num_bills);

    while (num_bills > 0) {
        printf("input bills: ");
        for (i=0; i<num_bills; i++)
            scanf("%d", &bills[i]);
        
        printf("input money: ");
        scanf("%d", &money);

        printf("%d\n\n", pay(money, bills, num_bills));

        printf("input number of bills(0 for exit): ");
        scanf("%d", &num_bills);
    }

    return 0;
}