#define MAXN    2000

int partition_memo(int n, int m)
{
    static int memo[MAXN][MAXN];
    int count = 0, i;

    if (n < m)
        m = n;
    if (memo[n][m] > 0)
        return memo[n][m];
    if (n == 0)
        return memo[n][m] = 1;
    
    for (i=1; i<=m; i++)
        count += partition_memo(n-i, i);
    
    return memo[n][m] = count;
}
