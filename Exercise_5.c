#include<stdio.h>
int main()
{
    int n=0,weight=1;
    printf("2^%d=%d\n",n,weight);
    printf("2^%d=%d\n",++n,weight*=2);
    printf("2^%d=%d\n",++n,weight*=2);
    printf("2^%d=%d\n",++n,weight*=2);
    printf("2^%d=%d\n",++n,weight*=2);
    printf("2^%d=%d\n",++n,weight*=2);
    printf("2^%d=%d\n",++n,weight*=2);
    printf("2^%d=%d\n",++n,weight*=2);
    printf("2^%d=%d\n",++n,weight*=2);
}
