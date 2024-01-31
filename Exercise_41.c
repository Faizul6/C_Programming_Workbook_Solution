#include<stdio.h>
int main()
{
    int size=100;
    int a[size];
    int a1[100]={0};
    printf("Array1= \n");
    for(int i=0;i<size;i++)
    {
        a[i]=0;
        printf("%d ",a[i]);

    }
    printf("\nArray2= \n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",a1[i]);
    }
}
