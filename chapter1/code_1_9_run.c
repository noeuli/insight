#include <stdio.h>
#include "code_1_9.c"
#include "code_1_8.c"

int main()
{
    int n;

    printf("fibo n=");
    scanf("%d", &n);

    printf("fibo(%d) = %lld\n", n, fibo(n));
    printf("fibo2(%d) = %lld\n", n, fibo2(n));
    printf("fibo3(%d) = %lld\n", n, fibo3(n));

    return 0;
}
