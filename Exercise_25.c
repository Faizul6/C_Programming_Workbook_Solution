<<<<<<< HEAD
#include<stdio.h>
int main()
{
    float cur_bal=1000;
    int year;
    float ror=0.35/100;

    while(cur_bal<2000)
    {
        cur_bal=cur_bal*(1+ror);
        year++;
    }
    printf("%f\n",cur_bal);
    printf("y=%d",year);

}
=======
#include<stdio.h>
int main()
{
    float cur_bal=1000;
    int year;
    float ror=0.35/100;

    while(cur_bal<2000)
    {
        cur_bal=cur_bal*(1+ror);
        year++;
    }
    printf("%f\n",cur_bal);
    printf("y=%d",year);

}
>>>>>>> 374333745fd88c9827c81649030d545397fa210a
