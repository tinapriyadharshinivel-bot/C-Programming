#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m1,m2,m3,total,average;
    char g;
    printf("enter marks for three subjects(out of 100):");
    scanf("%f%f%f",&m1,&m2,&m3);
    total=m1+m2+m3;
    average=total/3;
    printf("\nTotal marks=%.2f",total);
    printf("\nAverage marks=%.2f",average);
    if(average>=90)
        g='A';
    else if(average>=80)
        g='B';
    else if(average>=70)
        g='C';
    else if(average>=60)
        g='D';
    else if(average>=50)
        g='E';
    else
        g='F';

    printf("\nGrade=%c",g);
    if(average>=50)
        printf("\nResult:PASS\n");
    else
        printf("\nResult:FAIL\n");

    return 0;
}
