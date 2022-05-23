//Take a student structure (roll no dd,mm,yy cgpa).
//pass it to a function which will display these three students as per their increasing age.

#include<stdio.h>
struct student{
    int rollno;
    int dd,mm,yy;
    float cgpa;
};

void display1(struct student s[],int i){
    printf("The student roll no is %d\n",s[i].rollno);
    printf("The student dd is %d\n",s[i].dd);
    printf("The student mm is %d\n",s[i].mm);
    printf("The student yy is %d\n",s[i].yy);
    printf("The student cgpa is %f\n",s[i].cgpa);
}
void display(struct student s[]){
        if(s[0].yy>s[1].yy && s[0].yy>s[2].yy)
        {
            display1(s,0);
            if (s[1].yy>s[2].yy)
            {
                display1(s,1);
                display1(s,2);
            }
            else
            {
                display1(s,2);
                display1(s,1);
            }
        }
        else if(s[1].yy>s[0].yy && s[1].yy>s[2].yy)
        {
            display1(s,1);
            if (s[0].yy>s[2].yy)
            {
                display1(s,0);
                display1(s,2);
            }
            else
            {
                display1(s,2);
                display1(s,0);
            }
        }
        else
        {
            display1(s,2);
            if (s[0].yy>s[1].yy)
            {
                display1(s,0);
                display1(s,1);
            }
            else
            {
                display1(s,1);
                display1(s,0);
            }
        }
}
int main(){
    struct student s[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the student rollno");
        scanf("%d",&s[i].rollno);
        printf("Enter the student dd");
        scanf("%d",&s[i].dd);
        printf("Enter the student mm");
        scanf("%d",&s[i].mm);
        printf("Enter the student yy");
        scanf("%d",&s[i].yy);
        printf("Enter the student cgpa");
        scanf("%f",&s[i].cgpa);
    }
    display(s);
    return 0;
}