#include<stdio.h>
int main()
{
    printf("Enter time in seconds= ");
    float input;
    scanf("%f",&input);
    float hour=input/3600;
    int hours=(int)hour;
    float minute= (hour-hours)*60;
    int minutes=(int)minute;
    int second=(minute-minutes)*60;
    int seconds=(int)second;
    printf("%02d:%02d:%02d ",hours,minutes,seconds);
    //The values here are slightly off at the edge.

}




