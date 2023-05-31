#include <stdio.h>

int main()
{
    int n, row, col;
    printf("Enter N = ");
    scanf("%d", &n);

    for (row = n; row >= 1; row--)
    {

        for (col = 1; col <= row; col++)
        {

            printf(" %d", col); // To print character change to this 'printf(" %c", col+64);'
        }

        printf("\n");
    }

    return 0;
}

/* To print pattern like this change print function to 'printf(" %d", row);'

 5 5 5 5 5
 4 4 4 4
 3 3 3
 2 2
 1

*/
