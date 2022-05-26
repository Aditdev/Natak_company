#include <stdio.h>

int main()
{
    int k, sum = 0;
    int s[3][3], t[3][3], mul[3][3];
    int i, j;
    // To read the elements of a 3x3 matrix.
    printf("Enter elements of12 a 3x3 matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            scanf("%d", &s[i][j]);
    }
    // To read the elements of a 3x3 matrix.
    printf("\nEnter elements of a 3x3 matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            scanf("%d", &t[i][j]);
    }
    // Multiplication Logic
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            for (k = 0; k <= 2; k++)
            {
                sum += s[i][k] * t[k][j];
            }
            mul[i][j] = sum;
            sum = 0;
        }
    }

// Printing multiplication matrix.
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d ", mul[i][j]);
        printf("\n");
    }
    return 0;
}