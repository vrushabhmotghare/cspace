#include <stdio.h>

int main()
{
    int n =0;
    int sum =0;
    printf("Enter the number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        sum =sum +n %10 ;
        n= n / 10;
    }
    printf("sum of digits in number : %d\n",sum);
    return 0;
}