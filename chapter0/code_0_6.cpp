// code 0-6

#include <stdio.h>

void wrong_swap(int a, int b)
{
    int temp;

    temp  =a;
    a = b;
    b = temp;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 1, y = 2;

    printf("before swap()\n");
    printf("%d %d\n", x, y);

    swap(&x, &y);

    printf("after swap()\n");
    printf("%d %d\n", x, y);

    return 0;
}