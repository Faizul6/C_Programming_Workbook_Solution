<<<<<<< HEAD
#include<stdio.h>
int main()
{
    int year;
    printf("Enter year= ");
    scanf("%d",&year);
    if(((year%4)==0) && ((year%100)!=0))
    {
        if(year%400!=0)
        {
            printf("%d is Leapyear",year);
        }
        else
        {
            printf("%d is not a Leapyear",year);
        }
    }
    else
    {
         printf("%d is not a Leapyear",year);
    }

}
=======
#include<stdio.h>
int main()
{
    int year;
    printf("Enter year= ");
    scanf("%d",&year);
    if(((year%4)==0) && ((year%100)!=0))
    {
        if(year%400!=0)
        {
            printf("%d is Leapyear",year);
        }
        else
        {
            printf("%d is not a Leapyear",year);
        }
    }
    else
    {
         printf("%d is not a Leapyear",year);
    }

}
>>>>>>> 374333745fd88c9827c81649030d545397fa210a
