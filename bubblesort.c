#include <stdio.h>

/* Bubble Sort in array using C...
 Made By Aditya Lawate on 20/5/22
 at 20:09 pm.
*/
int main()
{
    int temp, i, j;
    int a[] = {1, 76, 54, 678, 544, 356, 5788, 2568, 244454, 76554, 3534, 3323, 565};
    for (i = 0; i < sizeof(a) / sizeof(int); i++)
    {
        for (j = 0; j < sizeof(a) / sizeof(int)i-1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < sizeof(a) / sizeof(int); i++)
        printf("%d ", a[i]);
    return 0;
}
