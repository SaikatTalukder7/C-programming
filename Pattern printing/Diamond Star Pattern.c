#include <stdio.h>
int main()
{
    int row, col;
    int n = 5;

    // Upper half (including middle row)
    for(row = 1; row <= n; row++)
    {
        // Print spaces
        for(col = 1; col <= n - row; col++)
            printf(" ");

        // Print stars
        for(col = 1; col <= 2 * row - 1; col++)
            printf("*");

        printf("\n");
    }

    // Lower half (excluding middle row)
    for(row = n - 1; row >= 1; row--)
    {
        // Print spaces
        for(col = 1; col <= n - row; col++)
            printf(" ");

        // Print stars
        for(col = 1; col <= 2 * row - 1; col++)
            printf("*");

        printf("\n");
    }

    return 0;
}

