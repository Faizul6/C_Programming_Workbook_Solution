#include<stdio.h>
int main()
{
    printf("Rows= ");
    int row,col,i,j;
    scanf("%d",&row);
    printf("Columns= ");
    scanf("%d",&col);
    int a[row][col];
    printf("Source data :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }      
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(a[i][j]<0)
            {
                a[i][j]=0 ;
            }
            else if(a[i][j]>255)
            {
                a[i][j]=255;
            }
        }      
    }
    printf("Clipped to [0,255]:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",a[i][j]);
            if(j+1==col)
            {
                printf("\n");
            }
        }      
    }
}