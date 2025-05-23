#include <stdio.h>

int main()
{
    int n =0;
    int pos =0;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("Enter the position to toggle\n");
    scanf("%d",&pos);

    n = n ^ ( 1 << pos);
    printf("%d\n", n);
    return 0;
}