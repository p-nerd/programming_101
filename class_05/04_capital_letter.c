#include <stdio.h>

int main()
{
    char lower, upper;

    printf("Enter a smaller letter: ");
    scanf("%c", &lower);

    upper = lower - ('a' - 'A');

    printf("The capital of %c is: %c\n", lower, upper);

    return 0;
}
