#include <stdio.h>

int main()
{
    int x = 20;
    double y = 25.52;

    x = (int)y;

    double z = (double)x;

    printf("%d\n", x);
    printf("%lf\n", z);

    return 0;
}
