#include <stdio.h>

int main()
{
    int a = 50, b = 60, sum;
    sum = a + b;

    printf("%d\n", sum); // 100;
    printf("%d\n", a);   // 50;
    printf("%d\n", b);   // 60;

    printf("%d + %d = %d\n", a, b, sum); // 50 + 60 = 110
    printf("%d + %d = %d\n", b, a, sum); // 60 + 50 = 110
    printf("%d + %d = %d\n", b, sum, a); // 60 + 110 = 50

    return 0;
}
