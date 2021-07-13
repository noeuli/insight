// code 0-1 최대 값과 최소 값을 구하는 함수

int min(int x, int y) 
{
    if (x < y) 
        return x;
    return y;
}

int max(int x, int y)
{
    if (x > y)
        return x;
    return y;
}