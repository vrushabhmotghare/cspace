#include <stdio.h>
#include <stdlib.h>

struct array
{
    int A[10];
    int size;
    int length;
};

void append( struct array *arr, int val)
{
    if(arr->length<arr->size)
        arr->A[arr->length++]=val;
}

void insert ( struct array * arr , int index , int val)
{
    int i =0;
    if(index >=0 && index <= arr->length)
    {
        for (i=arr->length; i > index; i--)
        {
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index] = val;
        arr->length++;
    }
}

void display( struct array arr)
{
    //display
    for (int i=0; i < arr.length; i++)
    {
        printf("%d\t",arr.A[i]);
    }
    printf("\n");
}

void delete(struct array * arr, int index )
{
    int x=0; int i=0;
    x = arr->A[index];
    if(index >=0  && index < arr->length)
    {
        for (i =index ; i < arr->length-1 ; i++)
        {
            arr->A[i] = arr->A[i+1];
        }
        arr->length--;
    }
    printf("deleted element %d\n",x);
}

int linear_serach(struct array arr, int key)
{
    int i =0;
    int pos =0;
    for (i=0; i < arr.length; i++)
    {
        if(arr.A[i] == key)
            return i;
    }
    return -1;
}


int main()
{
    struct array arr1;
    arr1.size =10;
    arr1.length =5;
    int i=0;
    printf("ENter the elements in the array\n");
    for (i=0; i < arr1.length; i++)
    {
        scanf("%d",&arr1.A[i]);
    }
    
    //append
    append(&arr1,10);  
    display(arr1);
    insert(&arr1,3 , 11); 
    printf("\n%d",arr1.length);
    display(arr1);
    delete(&arr1, 2);
    display(arr1);

    int pos = linear_serach(arr1, 3);
    printf("\nElement found at position : %d\n", pos);

    return 0;
}