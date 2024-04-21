#include <stdio.h>

int main()
{
    int i = 1;

    while (i <= 1000) // i = 1 -> 1 < 1000
    {
        printf("Sorry %d time\n", i);
    }

    i++;

    printf("Loop ended\n");

    return 0;
}