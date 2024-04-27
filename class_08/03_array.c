#include <stdio.h>

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};
    //                 0,  1,  2,  3,  4
    int reveresd_numbers[5];

    // reverse this array
    int j = 0;
    for (int i = 4; i >= 0; i--)
    {
        reveresd_numbers[j] = numbers[i];
        j++;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", reveresd_numbers[i]);
    }

    return 0;
}