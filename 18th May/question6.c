//write a structure for student consisting of roll no 3 subject mark and display the average mark along with all other details

#include<stdio.h>
int main(){
    struct student
    {
        char name[20];
        float m[3];
        float avg;
    };
    struct student s1;
    printf("Enter the name of the student");
    scanf("%s",s1.name);
    printf("Enter the marks of the student in 3 subjects");
    scanf("%f%f%f",&s1.m[0],&s1.m[1],&s1.m[2]);
    s1.avg=(s1.m[0]+s1.m[1]+s1.m[2])/3;
    printf("The average marks of the student is %f",s1.avg);
    return 0;
}
