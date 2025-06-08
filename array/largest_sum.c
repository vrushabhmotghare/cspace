#include <stdio.h>

int main()
{
    int arr[5];
    printf("Enter the elements of the array\n");
    for (int i=0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i=0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    } 
    
    int max_sum = 0;
    for (int i =0; i < 5; i++)
    {
        if(i == 4)
            break;;
        if(max_sum < arr[i] + arr [i + 1])
        max_sum = arr[i] + arr[i + 1];
    }
    printf("\nMAX_SUM : %d\n",max_sum);

    return 0;

}