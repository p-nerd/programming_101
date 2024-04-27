#include <stdio.h>

int main()
{
    int shihab[5] = {10, 20, 30, 40, 50}; // Array declear

    printf("First item: %d\n", shihab[0]); // Array access
    printf("Second item: %d\n", shihab[1]);
    printf("Third item: %d\n", shihab[2]);
    printf("Forth item: %d\n", shihab[3]);
    printf("Fifth item: %d\n\n\n", shihab[4]);

    double ad[4] = {10.2, 20.1, 30.5, 40.2};

    printf("First item: %lf\n", ad[0]);
    printf("Second item: %lf\n", ad[1]);
    printf("Third item: %lf\n", ad[2]);
    printf("Forth item: %lf\n\n\n", ad[3]);
    // printf("Fifth item: %lf\n", ad[4]);
    // printf("Fifth item: %lf\n", ad[-1]);

    // array traversing with loop
    for (int i = 0; i < 4; i++)
    {
        printf("%dth item is %lf\n", i, ad[i]);
    }
    printf("\n\n");

    int n = 200;
    int x[n];
    for (int i = 0; i < n; i++)
    {
        x[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%dth item is %d\n", i, x[i]);
    }

    // 3 things
    // illgal momoery access kora jaba na -1, -100, 100, 100
    // array items inital value is garbase
    // array index started on 0, end n-1 where n is numbers of items in the array

    return 0;
}