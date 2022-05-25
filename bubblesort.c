#include <stdio.h>

/* Linear Search in array using C...
 Made By Aditya Lawate on 18/5/22
 at 22:46 pm.
*/

int main()
{
    int flag = 0, i, n;
    int arr[] = {1, 96, 89, 23, 45, 67, 877, 654, 6543, 56, 76, 43};

    printf("Enter a number to be searched:\n");
    scanf("%d", &n);

    for (i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if (arr[i] == n)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("-1");
    else
        printf("The Number %d was found at position %d", n, 1 + i);
    return 0;
}
