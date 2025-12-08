#include <stdio.h>
#include <stdlib.h>
struct Student{
    int id;
    char name[20];
    float marks;
    float average;
};
int main(){
    struct Student s1={101,"Priya",89.5};
    struct Student s2={102,"Sanskruti",93.5};
    struct Student s3={103,"Chithra",90.5};
    printf("ID:%d\n",s1.id);
    printf("Name:%s\n",s1.name);
    printf("Marks:%.2f\n",s1.marks);

    printf("ID:%d\n",s2.id);
    printf("Name:%s\n",s2.name);
    printf("Marks:%.2f\n",s2.marks);

    printf("ID:%d\n",s3.id);
    printf("Name:%s\n",s3.name);
    printf("Marks:%.2f\n",s3.marks);

    float average=s1.marks+s2.marks+s3.marks/3;
    printf("the average of the marks is %f\n",average);
    return 0;
}
