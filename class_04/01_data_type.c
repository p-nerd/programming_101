#include <stdio.h>

int main()
{
    int a = 10232;             // 4 bytes -> -2147483648 to 2147483647
    long long int b = 2313242; // 8 bytes -> -9223372000000000000 to 9223372000000000099

    printf("%d\n", a);
    printf("%lld\n", b);

    return 0;
}
