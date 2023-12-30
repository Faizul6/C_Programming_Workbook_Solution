#include<stdio.h>
int main()
{
    float Tf,Tc;
    printf("Temp in Fahrenheit= ",Tf);
    scanf("%f",&Tf);
    Tc=((5*Tf)-160)/9;
    printf("Temp in Cen=%.2f ",Tc);
}

