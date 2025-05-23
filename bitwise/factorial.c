#include <stdio.h>

int factorial(int n){
   
    if (n == 0 || n == 1)
        return 1;  // Base case
    else
        return n * factorial(n - 1);  // Recursive case
   //num = n * (n-1);
    //num = n * factorial(n-1);
   //return n * factorial(n - 1);
}

int main()
{
    int n=0;
    printf("Enter the number\n");
    scanf("%d",&n);

    //int num = factorial(n);
    //factorial(n);
    //printf("factorial of %d = %d",n,num);
     printf("factorial of %d = %d ",n, factorial(n));
    return 0;
    
}