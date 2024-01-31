#include<stdio.h>
#include <math.h>
int main()
{
    float a=0.0;
    float b=4.0;

    float fa=((a*a)-(2*a)-1);
    float fb=((b*b)-(2*b)-1);

    printf("\na=%f||b=%f ",a,b);
    while(b-a>pow(10,-6))
    {
        float c=(a+b)/2;
        float fc=((c*c)-(2*c)-1);
        if(fa*fc<0)
        {
            b=c;

        }
        else
        {
            a=c;

        }
        printf("\na=%f||b=%f ",a,b);
    }
    float c=(a+b)/2;
    float fc=((c*c)-(2*c)-1);
    printf("\nroot=%.10f",c);
    printf("\nf(c)=%.10f ",fc);



}
