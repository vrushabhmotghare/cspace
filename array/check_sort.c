#include <stdio.h>

int main()
{
    int arr[5];
    int count =0;
    printf("Enter the elements of the array\n");
    for (int i =0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i =0; i < 5; i++)
    {
        printf("%d\t",arr[i]);
    }

    for (int i =0; i < 5; i++)
    {
        if(arr[i] <= arr[i +1])
        {
            count++;
        }
    }

    if(count == 5)
    {
        printf("array is sorted\n");
    }
    else
        printf("array is not sorted\n");

    return 0;
}