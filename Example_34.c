#include<stdio.h>
#include<math.h>
int scanBinaryInteger(int a)
{
    printf("Enter= ");
    scanf("%d",&a);
    int mod,mul=0,i=0;
    while(a!=0)
    {
        mod=a%10;
        mul=(pow(2,i)*mod)+mul;
        a=a/10;
        ++i;
    }
    printf("Decimal:%d",mul);
}
int main()
{
    int a;
    scanBinaryInteger(a);

}



