// code 0_4

#include <iostream>


int max_arr(int arr[], int arr_len)
{
    int maxA, i;

    maxA = arr[0];
    for (i=1; i<arr_len; i++)
        if (arr[i] > maxA)
            maxA = arr[i];
    
    return maxA;
}

#define MAX(x, y)   ((x)>(y) ? (x) : (y))

int max_arr2(int arr[], int arr_len)
{
    if (arr_len == 1)
        return arr[0];
    else
        return MAX(arr[arr_len-1], max_arr2(arr, arr_len-1));
}

#define ARRAY_SIZE  1000

int A[ARRAY_SIZE];
int pc;

int main()
{
    int i, ans;

    for(i=0; i<ARRAY_SIZE; i++) {
        A[i] = ARRAY_SIZE-i;
    }
    
    pc = 0;
    ans = max_arr(A, ARRAY_SIZE);
    printf("#1 ans=%d\n", ans);

    ans = max_arr2(A, ARRAY_SIZE);
    printf("#2 ans=%d\n", ans);

    return 0;
}
