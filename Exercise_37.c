#include<stdio.h>
#include<math.h>
float leibnizseries(int N)
{
    float Pi=0.0;
    for(int n=0;n<=N;n++)
    {
      Pi=((4*pow(-1,n))/((2*n)+1))+Pi;
    }
    return Pi;
}

int main()
{
    int N;
    for(int i=0;i<=1000;i+=50)
    {
       printf("N=%4d || PI=%f\n",i,leibnizseries(i));
    }
}
