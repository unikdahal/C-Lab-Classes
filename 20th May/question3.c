//Write a employee structure (emp id,emp name , basic salary,bonus).
//Take 3 employee information, pass those information to a function and return the employee
//id whose total salary is maximum  In the main function you need to display that employees detail

#include<stdio.h>
struct employee{
    int id;
    char name[20];
    int salary;
    float bonus;
};
int maxsalary(struct employee e[]){
    if(e[0].salary>e[1].salary && e[0].salary>e[2].salary)
    {
        return e[0].id;
    }
    else if(e[1].salary>e[0].salary && e[1].salary>e[2].salary)
    {
        return e[1].id;
    }
    else
    {
        return e[2].id;
    }
}

int main(){
    struct employee a[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the employee id");
        scanf("%d",&a[i].id);
        printf("Enter the employee name");
        scanf("%s",a[i].name);
        printf("Enter the employee salary");
        scanf("%d",&a[i].salary);
        a[i].bonus=a[i].salary*0.2;
    }
    int mId=maxsalary(a);

    for (int i = 0; i < 3; i++)
    {
        if(a[i].id==mId)
        {
            printf("The employee id is %d\n",a[i].id);
            printf("The employee name is %s\n",a[i].name);
            printf("The employee salary is %d\n",a[i].salary);
            printf("The employee bonus is %f\n",a[i].bonus);
        }
    }
    return 0;

    
}