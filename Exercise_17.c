#include<stdio.h>
int main()
{
    char c;
    printf("Enter= ");
    scanf("%c",&c);
    if(c>='0' && c<='9')
    {
        printf("it's a number");
    }
    else if(c>='A' && c<='Z')
    {
        printf("Uppercase character");
    }
    else if(c>='a' && c<='z')
    {
        printf("lowercase character");
    }
    else
    {
        printf("It is charactes/symbols");
    }

}
