#include <stdio.h>

int main()
{
    int a, b=0;
    printf("Enter the numbert \n");
    scanf("%d %d",&a,&b);
    if ((a ^b) == 0)
        printf("numbers are equal\n");
    else    
        printf("numbers are not equal\n");

    return 0;
}