#include <stdio.h>

int main()
{
    int arr[5];
    int arr2[5];
    int count =0;
    printf("Enter the elements in the array\n");

    
    for (int i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i=0,j=4; i< 5;i++,j--)
    {
        arr2[j] = arr[i];
    }

    for (int i=0; i<5; i++)
    {
        printf("%d\t ",arr2[i]);
    }
    for (int i =0; i< 5; i++)
    {
        if (arr[i] == arr2[i])
        {
            count++;
        }
    }
    printf("\ncount : %d\n",count);

    if(count ==5)
        printf("array is pallindrome\n");
    else 
        printf("array is not pallindrome\n");

    return 0;

}