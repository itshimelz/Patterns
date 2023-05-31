#include <stdio.h>

int main()
{

    int n, row, col;
    printf("Enter N = ");
    scanf("%d", &n);

        for (row = 1; row <= n; row++)
    {
        // This loop will print only 1 and 0
        for (col = 1; col <= row; col++)
        {
            printf(" %d", col % 2);
        }

        printf("\n");
    }

    return 0;
}