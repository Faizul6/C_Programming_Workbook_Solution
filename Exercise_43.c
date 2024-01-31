#include<stdio.h>
int main()
{
    int size,i;
    printf("Enter size= ");
    scanf("%d",&size);
    int a[size];
    printf("Source ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Inverted ");
    while(--i>=0)
    {
        printf("%d ",a[i]);
    }
    




}
