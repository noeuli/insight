// code 0-17

int all_is(int arr[], int arr_len, int k)
{
    int i;

    for(i=0; i<arr_len; i++)
        if (arr[i] != k)
            return 0;
    
    return 1;
}
