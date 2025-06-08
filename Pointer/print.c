#include <stdio.h>

int main()
{
    int a =10;
    int b =20;

    int *p1 = &a;
    int *p2 = &b;

    printf("Address of a = %p\n", (void*)&a);
    printf("Address of b = %p\n", (void*)&b);
    printf("Address of p1 = %p\n", (void*)&p1);   
    printf("Address of p2 = %p\n", (void*)&p2);
    printf("Value of p1 = %p\n", (void*)p1);
    printf("Value of p2 = %p\n",(void *)p2);
    printf("Value of a = %d\n",a);
    printf("Value of b = %d\n",b);

    return 0;
}
