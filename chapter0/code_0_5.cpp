// code 0-5

#include <stdio.h>

void wrong_swap(int a, int b)
{
    int temp;

    temp  =a;
    a = b;
    b = temp;
}

int main()
{
    int x = 1, y = 2;

    printf("before swap()\n");
    printf("%d %d\n", x, y);

    wrong_swap(x, y);

    printf("after wrong_swap()\n");
    printf("%d %d\n", x, y);

    return 0;
}