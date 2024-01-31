#include<stdio.h>
int main()
{
    int size,i;
    printf("Enter size= ");
    scanf("%d",&size);
    int a[size];
    int b[size];
    printf("Source ");
    for(i=0;i<size;i++)
    {
        
        scanf("%d",&a[i]);
    }
    printf("Copy");
    for(i=0;i<size;i++)
    {
        b[i]=a[i];
        printf(" %d",b[i]);
    }



}
