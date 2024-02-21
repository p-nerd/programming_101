#include <stdio.h>

int main()
{
    int x, y, sum; // variable allocated in the memory

    printf("Input a interger number: ");
    scanf("%d", &x);
    printf("Input another interger number: ");
    scanf("%d", &y);

    sum = x + y;

    printf("The sum is: %d\n", sum);

    return 0;
}
