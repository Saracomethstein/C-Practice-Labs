#include <stdio.h>

void GiveMeTime(int seconds)
{
    int days = seconds / (24 * 3600);
    int hours = (seconds % (24 * 3600)) / 3600;
    int minutes = (seconds % 3600) / 60;
  
    printf("Days: %d\nHours: %d\nMinutes: %d", days, hours, minutes);
}

int main()
{
    int seconds = 0;
    int scan = 0;
    char scanChar = 0;
    printf("Enter seconds (int): ");
    scan = (scanf("%d%c", &seconds, &scanChar));
    if (scan == 2 && scanChar == '\n' && seconds >= 0)
    {
        GiveMeTime(seconds);
    }
    else
    {
        printf("n/a");
    }
    return 0;
}