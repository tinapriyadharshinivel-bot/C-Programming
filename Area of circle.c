#include <stdio.h>
#include <stdlib.h>

int main(){
    float radius;
    float area;
    float pi=3.14;

    printf("enter the value of radius");
    scanf("%f",&radius);

    area=radius*radius*pi;
    printf("the area of circle is %.3f",area);
    return 0;
}
