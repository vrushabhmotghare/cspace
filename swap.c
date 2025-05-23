#include <stdio.h>

//using third varibale
int swap ( int *a, int *b)
{
    int c =0;
    c=*b;
    *b=*a;
    *a=c;
}

//bitwise operator swap
int bit_swap( int * a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}


int main()
{
    int a , b=0;
    printf("Enter the two numbers\n");
    scanf("%d %d", &a , &b);
    //using same variable
    a= a+b;
    b= a-b;
    a= a-b;
    printf("%d %d\n", a, b);

    swap (&a, &b);
    printf("%d %d\n", a, b);

    bit_swap(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
    
}