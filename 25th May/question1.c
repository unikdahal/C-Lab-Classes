// Create a structure(roll,name ,marks[3],cgpa (marks and cgpa in union)) Take such student information send this details to a function which arrange three students in ascending order of their mark/CGPA. and return back to main function where the main function has to display the student details (in increasing order)

#include<stdio.h>
struct student{
    int rollno;
    char name[20];
    union a{
        int marks;
        float cgpa;
    };
};
int main(){
    struct student s[3];
    int i;
    for(i=0;i<3;i++){
        printf("Enter the roll no\n");
        scanf("%d",&s[i].rollno);
        printf("Enter the name\n");
        scanf("%s",s[i].name);
        printf("Enter the marks\n");
        scanf("%d",&s[i].a.marks);
        printf("Enter the cgpa\n");
        scanf("%f",&s[i].a.cgpa);


    }


}