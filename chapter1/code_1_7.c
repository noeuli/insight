#include <stdio.h>

// 중복 계산 없애기

#define MAXN    2000

long long memo[MAXN][MAXN];
unsigned int callCount;

long long choose2(int n, int r)
{
    callCount++;

    if (memo[n][r] > 0)
        return memo[n][r];
    
    if (r == 0 || n == r)
        return memo[n][r] = 1;
    
    return memo[n][r] = choose2(n-1, r-1) + choose2(n-1 ,r);
}

int main()
{
    int n, r;

    callCount = 0;
    printf("2) input n, r: ");
    scanf("%d %d", &n, &r);
    printf("%lld\n", choose2(n, r));
    printf("callCount = %d\n", callCount);

    return 0;
}
