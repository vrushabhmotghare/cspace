#include <stdio.h>

int main()
{
    int arr[5];
    int temp;
    
    printf("Enter the elements of the array\n");
    for (int i=0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( int i=0; i < 5; i++){
        printf("Elements of the array arr[%d] = %d\n",i , arr[i]);
    }

    int largest = arr[0];
    for (int i =0 ; i<5; i++ ){
        if (largest < arr[i])
        {
            largest = arr[i];
            temp = i;
        }
    
    }

    printf("max value is present at index %d\n",temp); 
    printf("largest = %d\n",largest);
    return 0;
}