#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int emp_id;
    char name[20];
    float salary;
}Employee;

int main(){
    Employee e1 = {1001,"Kiran",45000.50};
    printf("Employee ID:%d\n",e1.emp_id);
    printf("Name:%s\n",e1.name);
    printf("Salary:%.2f\n",e1.salary);
    Employee e2={102,"Donald Trump",65000.5};
    printf("ID:%d\n",e2.emp_id);
    printf("Name:%s\n",e2.name);
    printf("Salary:%.2f\n",e2.salary);
    Employee e3={103,"Sanskruti",72000.5};
    printf("ID:%d\n",e3.emp_id);
    printf("Name:%s\n",e3.name);
    printf("Salary:%.2f\n",e3.salary);


    return 0;
}
