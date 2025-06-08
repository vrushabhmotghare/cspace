#include <stdio.h>

int main()
{
    int arr[3];
    int arr2[3];
    int i=0;
    printf("Enter the element for the arr\n");
    for (i=0; i< 3 ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0; i<3; i++)
    {
        printf("arr[%d] = %d\n", i,arr[i]);
    }
    for (i=0; i<3; i++)
    {
        arr2[i] = arr[i];
        printf("arr2[%d] = %d\n", i,arr[i]);
    }
    return 0;
}