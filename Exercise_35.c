#include<stdio.h>
void printbinary(int decimal)
{
    while(decimal>0)
    {

        int digit=decimal%2;
        decimal/=2;
        printf("%d",digit);
    }

}

int main()
{
    int i;
    scanf("%d",&i);
    printbinary(i);


}
