#include <stdio.h>
int main()
{
    int n, row, col;

    printf("Enter N = ");
    scanf("%d", &n);

    //Code for printing a pyramid pattern
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("%d ", col);
        }

        printf("\n");
    }

    return 0;
}

/* Use 'printf("%d ", row);' to print pattern like this

1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 

'*/
