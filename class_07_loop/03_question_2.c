#include <stdio.h>

int main()
{
    int input;

    printf("Enter the limit: ");
    scanf("%d", &input);

    int x = 1;

    while (x <= input)
    {
        printf("%d namta: \n", x);
        int i = 1;
        while (i <= 10)
        {
            printf("%d * %d == %d\n", x, i, x * i);
            i++;
        }

        x++;
    }

    // Nested loop

    return 0;
}