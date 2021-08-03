#include <stdio.h>

// code 1-12

int partition(int n, int m)
{
    int count = 0, i, tmp;

    if (n < m)
        m = n;
    if (n == 0) {
        // printf("1 ");
        return 1;
    }
    
    for (i=1; i<=m; i++) {
        tmp = partition(n-i, i);
        // printf("%d ", tmp);
        count += tmp;
    }
    
    //printf("\n");
    // printf("%d ", count);
    return count;
}

int main()
{
    int n, m, count;

    printf("input n, m: ");
    scanf("%d %d", &n, &m);

    count = partition(n, m);
    printf("total: %d\n\n", count);

    return 0;
}