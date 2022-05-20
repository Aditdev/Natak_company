#include <stdio.h>
int main()
{
    int arr[10],i,j,temp;
    printf("Enter your 1D array");
    for (i=0;i<10;i++)
        scanf("%d",&arr[i]);
        
    for(i=0;i<10;i++){
        for (j=0;j<10;j++){
            if (arr[j+1]>arr[j])
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    printf("Sorted array is \n");
    for(i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
}

// Encountering some error pls help resolve it

