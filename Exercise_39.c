#include<stdio.h>

float f(float x)
{
    return ((x*x)-(2*x)-1);
}
float f1(float x)
{
    return ((2*x)-2);
}
float newton(float x, int iter, float delx)
{
    int i;
    for(i=0;i<iter;i++)
    {
       x=x-(f(x)/f1(x));
    }
    return x;
}


int main()
{
    float a=4.0;
    float b = newton(a,1000,1.0e-6);
    printf("Zero-crossing for f(x)=x^2-2x-1 by Newton Method: ");
    printf("\nApproximated x0         : %.9f ",b);
    float c= f(b);
    printf("\nApproximated f(x0)      : %.9f",c);
}

