// code 0-2 배열의 최대 값을 구하는 함수

int max_arr(int arr[], int arr_len)
{
    int maxA, i;

    maxA = arr[0];
    for (i=1; i<arr_len; i++)
        if (arr[i] > maxA)
            maxA = arr[i];
    
    return maxA;
}
