#include <stdio.h>
#include <string.h>

void rev (char * str)
{
    int i=0 , j=0;
    int len = strlen(str);
    j= len-1;
    char temp=0;
    while(i< j)
    {
        temp= str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
    printf("reverse string : %s\n",str);
}

int main()
{
    char * str  = (char *)malloc(10*sizeof(char));
    printf("Enter the string:");
    gets(str);
    rev(str);
    return 0;
}