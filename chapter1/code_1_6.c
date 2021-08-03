#include <stdio.h>

// code 1-6 재귀적으로 nCr을 계산하기
// nC0 = nCn = 1
// r > 0, nCr = (n-1)C(r-1) + (n-1)Cr

unsigned int callCount;

long long choose(int n, int r)
{
    callCount++;

    if (r == 0 || n == r)
        return 1;
    
    return choose(n-1, r-1) + choose(n-1, r);
}

int main()
{
    int n, r;

    callCount = 0;

    printf("input n, r: ");
    scanf("%d %d", &n, &r);
    printf("%lld\n", choose(n, r));
    printf("callCount = %d\n", callCount);

    return 0;
}
