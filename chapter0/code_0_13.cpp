// code -013

#include <stdio.h>

#define     N   10

int main()
{
    int i, j, k, x = 0;

    for(i=0; i<N; i++)
        for(j=i; j<N; j++)
            for(k=j; k<N; k++) {
                printf("[%d %d %d] ", i, j, k);
                x++;
            }
    
    printf("%d\n", x);

    return 0;
}