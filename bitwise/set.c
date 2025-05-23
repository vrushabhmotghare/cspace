#include <stdio.h>

int main()
{
    int n=0;
    int pos=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("Enter the position to set\n");
    scanf("%d", &pos);
    n = (1 << pos) | n;
    printf("%d\n",n);
    n = (1 << pos) & n;
    printf("%d\n",n);
    return 0;
}