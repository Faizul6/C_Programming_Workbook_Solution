<<<<<<< HEAD
#include<stdio.h>

int isLetter(char a)
{

    return (a>='a'&& a<='z'|| a>='A'&& a<='Z');

}
int main()
{
    char a;
    printf("Enter= ");
    scanf("%c",&a);
    if(isLetter(a))
    {
         printf("Character= %c",a);
    }
    else
        printf("Not a letter");


}
=======
#include<stdio.h>

int isLetter(char a)
{

    return (a>='a'&& a<='z'|| a>='A'&& a<='Z');

}
int main()
{
    char a;
    printf("Enter= ");
    scanf("%c",&a);
    if(isLetter(a))
    {
         printf("Character= %c",a);
    }
    else
        printf("Not a letter");


}
>>>>>>> 374333745fd88c9827c81649030d545397fa210a
