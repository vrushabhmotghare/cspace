#include <stdio.h>
#include <string.h>

int copy(char *src,char *dest)
{
    while(*src != '\0')
    {
        *dest++ = *src++;
    }
    dest = '\0';
}



int main()
{
    char str[10];
    printf("Enter the string\n");
    fgets(str, sizeof(str), stdin);

    char str2[10];
    copy (str,str2);
    printf("Copied string: %s\n", str2);
}