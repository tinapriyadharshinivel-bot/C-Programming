#include <stdio.h>
#include <stdlib.h>

struct Student{
    int id;
    char name[30];
     int sem;
     char branch[10];
     char dept[20];
};
int main(){
    struct Student s[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("enter details for student %d\n",i+1);
        printf("ID:");
        scanf("%d",&s[i].id);

        printf("Name:");
        scanf("%[^\n]s",s[i].name);

        printf("Semester:");
        scanf("%d",&s[i].sem);

        printf("Branch:");
        scanf("%s",&s[i].branch);

        printf("Department:");
        scanf("%[^\n]s",s[i].dept);

        printf("-----------------------\n");
    }
        printf("\n%-10s%-20s%-5s%-10s%-20s\n","ID","Name","Sem","Branch","Department");

        printf("-----------------------\n");

        for(i=0;i<5;i++){
            printf("\n%-10d%-20s%-5d%-10s%-20s\n",s[i].id,s[i].name,s[i].sem,s[i].branch,s[i].dept);

        }


    return 0;
}
