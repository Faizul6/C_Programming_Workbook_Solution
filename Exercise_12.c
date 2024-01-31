#include<stdio.h>
int main()
{
    char n;
    printf("Enter Character= ",n);
    scanf("%c",&n);
    if(n>=96 && n<=122)
    {
        printf("Corresponding Uppercase=%c ",n-32);
    }
    else
    {
        printf("Not Executable");
    }



}


