#include <stdio.h>

int main()
{
    double x = 25.52;

    int y = (int)x; // 25

    double z = (double)y; // 25.000000

    printf("%lf\n", z);

    // 25.520000
    // 25.000000

    return 0;
}
