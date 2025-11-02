#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter an integer");
    scanf("%d",&n);
    if (n<0)
    {
        printf("you entered %d.\n",n);
    }

    return 0;
}
