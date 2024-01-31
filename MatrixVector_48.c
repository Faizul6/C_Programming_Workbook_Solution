#include<stdio.h>
int main()
{
    int row,col,i,j,k,l,m,n;
    printf("Mattix:1 \n");
    printf("Row= ");
    scanf("%d",&row);
    printf("Column= ");
    scanf("%d",&col);
    int mat[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat[i][j]);
        }      
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",mat[i][j]);
            if(j+1==col)
            {
              printf("\n");
            } 
        }     
    }
    int row1,col1;
    printf("\nMattix:2 \n");

    printf("Row= ");
    scanf("%d",&row1);
    printf("Column= ");
    scanf("%d",&col1);
    int mat1[row1][col1];
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            scanf("%d",&mat1[i][j]);
        }      
    }

    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            printf("%d ",mat1[i][j]);
            if(j+1==col1)
            {
              printf("\n");
            } 
        }       
    }
    if(col!=row1)
    {
        printf("Vector multiplication not possible");
    }
    else {
    printf("\nMatrix Multiplication:\n");
    int mul[row][col1];
    for (i = 0; i < row; i++) 
    {
        for (j = 0; j < col1; j++) 
        {
            mul[i][j] = 0;
            for (k = 0; k < col; k++) 
            {
                mul[i][j] += mat[i][k] * mat1[k][j];
            }
        }
    }
    for (i = 0; i < row; i++) 
    {
        for (j = 0; j < col1; j++) 
        {
            printf("%d ", mul[i][j]);
            if (j + 1 == col1) 
            {
                printf("\n");
            }
        }
    }
}
    
    












}