#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    // -100

    if (x > 0) // -100 > 0 -> false
    {
        printf("Shihab\n");
        printf("Positive\n");
    }
    else if (x < 0) // -100 < 0 -> true
    {
        printf("Nagetive\n");
    }
    else
    {
        printf("Zero\n");
    }

    return 0;
}
