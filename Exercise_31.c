#include<stdio.h>
int main()
{
    printf("Enter= ");
    int number;
    while(1)
    {
      scanf("%c",&number);
      printf("%c",number);
      if(number=='\n')
      {
          break;
      }
    }


}
