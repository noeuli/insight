#include <stdio.h>

// 금액 맞추기

int main()
{
    int bills[6] = { 1, 2, 5, 10, 20, 50 };
    int count = 0, money = 100, i0, i1, i2, i3, i4;

    for (i0 = money; i0 >= 0; i0 -= bills[0])
        for (i1 = i0; i1 >= 0; i1 -= bills[1])
            for (i2 = i1; i2 >= 0; i2 -= bills[2])
                for (i3 = i2; i3 >= 0; i3 -= bills[3])
                    for (i4 = i3; i4 >= 0; i4 -= bills[4])
                        if (i4 % bills[5] == 0)
                            count++;

    printf("count = %d\n", count);

    return 0;
}
