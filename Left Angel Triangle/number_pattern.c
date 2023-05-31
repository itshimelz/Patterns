#include <stdio.h>

int main()
{
    int n, row, col;
    printf("Enter N = ");
    scanf("%d", &n);

    for (row = 1; row <= n; row++)
    {
        // Print space
        for (col = 1; col <= n - row; col++)
        {
            printf(" ");
        }

        // Print number
        for (col = 1; col <= row; col++)
        {
            printf("%d ", col);
        }

        printf("\n");
    }

    return 0;
}