#include<stdio.h>
#define originalpin 1245
int main()
{

    printf("Enter pin= ");
    int i;
    int maxtime=3;
    for(i=0;i<=2;i++)
    {
        int typedpin;
        scanf("%d",&typedpin);
        if(typedpin==originalpin)
        {
            printf("Verification Completed");
            break;
        }
        else
        {
            --maxtime;
            if(maxtime<1)
            {
                printf("Limit over!! Hacker!!");
                break;
            }
            printf("Incorrect: retry= ");
        }

    }


}
