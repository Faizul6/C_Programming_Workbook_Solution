#include<stdio.h>
float f(float x)
{
    return (x*x)-(2*x)-1;
}

float bisection(float a,float b,float delx)
{
    float c;
    while(b-a>=delx)
    {
        c=(a+b)/2;

        if(f(a)*f(c)<0)
        {
          b=c;
        }
        else if(f(b)*f(c)<0)
        {
          a=c;
        }
    }
    return c;
}
int main()
{
    float a,b,c;
    float delx=1.0e-6;
    a=0.0;
    b=4.0;
    c=bisection(a,b,delx);
    printf("Zero-crossing for f(x)=x^2-2x-1 by bisection Method: ");
    printf("\nStopped at interval size: %.10f", delx);
    printf("\nApproximated x0         : %.10f ",c);
    printf("\nApproximated f(x0)      : %.10f",f(c));
}
