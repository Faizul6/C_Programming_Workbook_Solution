#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int throwdice(int randonumber)
{
    int randomnumber;
    srand(time(NULL));
    float j=0.0;
    for(int i=0;i<=99;i++)
    {
       randomnumber = (rand() % 6) + 1;
       printf("%d=%d\n", i,randomnumber);
       j=j+randomnumber;
    }
    printf("average= %.2f",j/100);


}


int main(void) {
    int randomnumber;
    throwdice(randomnumber);
    return 0;
}
