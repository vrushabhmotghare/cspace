#include <stdio.h>
#include <string.h>

/*
int strlen1( char * str)
{
    int count =0;
    while(*str !='\0')
    {
        count++;
        str++;
    }
    return count;

}
*/

int strlen1 ( char str[])
{
    int count =0;
    while (*str != '\0')
    {
        count++;
        str++;
    }
    return count;

}



int main()
{
    char str1[100];
    int count =0;
    int i=0;
    //char *p = &str1;
    printf("Enter the string\n");
    //scanf("%s",str1);
    fgets(str1, sizeof(str1), stdin); // reads input with spaces

    count = strlen1(str1);
    /*while(*p != '\0')
    {
        count++;
        *p++;
    }*/
     /*while (str1[i] != '\0')
     {
        count++;
        i++;
     }
        */
    printf("number of charcater in the string %d\n", count);

    return 0;

}