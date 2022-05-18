#include <stdio.h>
// Linear Search in array using C...
// Made By Aditya Lawate on 18/5/22
// at 22:46 pm.
int linear_search(int arr[], int size, int num)
{
    int i, flag = 0, k;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            flag = 1;
            k = arr[i];
            break;
        }
    }
    if (flag == 0)
        return -1;
    else
        return i;
}

int main()
{
    int arr[10], i, n;
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    printf("Enter a number to be searched:\n");
    scanf("%d", &n);
    int k = linear_search(arr, *(&arr + 1) - arr, n);
    printf("%d", k);
    return 0;
}