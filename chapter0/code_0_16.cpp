#include <stdio.h>

// code 0-16

void print_arr(int arr[], int arr_len) 
{
    int i;

    for(i=0; i<arr_len; i++)
        printf("%d ", arr[i]);
    
    printf("\n");
}
