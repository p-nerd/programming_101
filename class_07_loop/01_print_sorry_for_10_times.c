#include <stdio.h>

int main()
{
    int i = 1; // 0

    while (i <= 500)
    {
        if (i == 299)
        {
            i++;
            continue;
        }
        printf("Sorry %d time\n", i);
        i++;
    }

    printf("Loop ended\n");

    return 0;
}