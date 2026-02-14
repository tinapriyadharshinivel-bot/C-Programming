#include <stdio.h>
#include <stdlib.h>

enum Week {Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Satuday};
int main()
{
    enum Week day;
    day=Wednesday;
    printf("Numeric value of Wednesday is:%d\n",day);
    return 0;
}
