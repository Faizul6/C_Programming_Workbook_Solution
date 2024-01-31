#include<stdio.h>
int main()
{
    int cls1=24;
    int cls2=24;
    int cls3=25;
    int cls4=26;
    float total=cls1+cls2+cls3+cls4;
    printf("Number of pupil per team=%f\n",total/8);
    int group=8;
    int r1,r2,r3,r4;
    r1=cls1%group;
    r2=cls2%group;
    r3=cls3%group;
    r4=cls4%group;
    int remained;
    printf("remaining_childrens=%d\n",r1+r2+r3+r4);
}
