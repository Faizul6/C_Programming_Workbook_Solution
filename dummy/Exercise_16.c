#include<stdio.h>
int main()
{
   int r1, r2;
   double Irx1 = 0;
   double Uo = 5.0;

   printf("Enter r1= ");
   scanf("%d", &r1);
   printf("Enter r2= ");
   scanf("%d", &r2);

   double Urx1 = (r2 * (Uo - (r1 * Irx1))) / (double)(r1 + r2);
   printf("When Irx=0, Urx=%.1f\n", Urx1);

   double Irx2 = 0.5;
   double Urx2 = (r2 * (Uo - (r1 * Irx2))) / (double)(r1 + r2);
   printf("When Irx=0.5, Urx=%.1f\n", Urx2);

   return 0;
}
