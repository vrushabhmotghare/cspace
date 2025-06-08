#include <stdio.h>
#include <string.h>

//string concat
int str_cat1(char str[] , char str2[]){

    char str3[30];
    int i, j=0;
    for (i=0; str[i] != '\0'; ++i)
    {
        str3[i] = str[i];
    }
    for (j=0; str2[j] !='\0'; ++j)
    {
        str3[i+ j] = str2[j];
    }
    str3[i+j] = '\0';
    printf("%s",str3);

}

//string reverse
void reverse (char * str)
{
    int length = strlen(str);
    printf("length : %d\n",length);
    char str2[20];
    int i=0;
    for (i =0; i< length; i++)
    {
        str2[i] = str[length -1 -i];
    }
    str2[i]= '\0';
    printf("%s",str2);
}

//equal string
void equal(char str[])
{
    

}

int main()
{
    char str[20];
    char str2[10];
    printf("Enter the string\n");
    fgets(str, sizeof(str), stdin);
    fgets(str2, sizeof(str2), stdin);

    str_cat1(str,str2);

    reverse(str);

    return 0;
}