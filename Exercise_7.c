#include<stdio.h>
int main()
{
    float I,R,U,P;
    I=20./1000.; //amp
    R=150; //ohm
    printf("Voltage,U=%.2f\n",(I*R));
    printf("Power,P=%.2f",(I*I*R));
}
