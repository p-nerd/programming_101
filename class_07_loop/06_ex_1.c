// print this
// * // 1
// ** // 2
// *** // 3
// **** // 4
// ***** // 5

#include <stdio.h>

int main()
{
    int input;
    printf("Number of lines: ");
    scanf("%d", &input);

    for (int i = 1; i <= input; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}