// code 0-14

void left_rotate(int arr[], int s, int t)
{
    int i, first;

    first = arr[s];

    for (i=s; i<t; i++)
        arr[i] = arr[i+1];
    
    arr[t] = first;
}
