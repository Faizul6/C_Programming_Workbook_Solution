#include <stdio.h>
//Updated from previous mistake

int main()
{
    int seconds, hours, minutes, remaining_seconds;
    printf("Enter in seconds: ");
    scanf("%d", &seconds);
    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    second = seconds % 60;
    printf("The formatted time is: %02d:%02d:%02d\n", hours, minutes, second);

    return 0;
}





