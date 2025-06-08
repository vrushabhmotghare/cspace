#include <stdio.h>

int main ()
{
    int arr1[5];

    printf("Enter the elements of the array\n");
    for (int i=0; i < 5; i++)
    {
        scanf("%d",&arr1[i]);
    }
    for ( int i=0; i < 5; i++){
        printf("Elements of the array arr1[%d] = %d\n",i , arr1[i]);
    }
    for (int i =4 ; i>= 0; i--){
        printf("Elements of the array in the reverse order arr1[%d] = %d\n",i , arr1[i]);
    }

}