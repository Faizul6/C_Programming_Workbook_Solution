#include<stdio.h>
int main()
{
    printf("Enter Character (a-z)= ");
    char c;
    scanf("%c",&c);
    printf("Corresponding Upper case= %c",c-('a'-'A'));

}

