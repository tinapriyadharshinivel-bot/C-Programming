#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter an integer");
    scanf("%d",&n);
    if (n%2==0)
    {
        printf("given number is even");
    }
    else
    {
        printf("the number is odd");
    }

    return 0;
}
