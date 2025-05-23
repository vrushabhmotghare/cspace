#include <stdio.h>

int main()
{
    int n =0;
    printf("Enter the number\n");
    scanf("%d",&n);

    int even_bits = n & 0xAAAAAAAA; //mask for even bits 
    int odd_bits = n & 0x55555555;  // mask for odd bits

    n = (even_bits >> 1) | (odd_bits << 1);
    printf("%d",n);
    return 0; 

}