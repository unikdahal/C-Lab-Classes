// Create a structure(roll,name ,marks[3],cgpa (marks and cgpa in union)) Take such student information send this details to a function which arrange three students in ascending order of their mark/CGPA. and return back to main function where the main function has to display the student details (in increasing order)

#include<stdio.h>
struct student{
    int rollno;
    char name[20];
    union a{
        int marks[3];
        float cgpa;
    }score;
};

struct assign(struct student s3[],int a){
    s3[a]=
}

struct ascending(struct student s[]){
    if(s[0].score.cgpa>s[1].score.cgpa&&s[0].score.cgpa>s[2].score.cgpa){
        assign(struct student s3[],0);
        if(s[1].score.cgpa>s[2].score.cgpa){
            assign(struct student s3[],1);
            assign(struct student s3[],2);
        }
        else{
            assign(struct student s3[],2);
            assign(struct student s3[],1);
        }
    }
    else if(s[1].score.cgpa>s[0].score.cgpa&&s[1].score.cgpa>s[2].score.cgpa){
        assign(struct student s3[],1);
        if(s[0].score.cgpa>s[2].score.cgpa){
            assign(struct student s3[],0);
            assign(struct student s3[],2);
        }
        else{
            assign(struct student s3[],2);
            assign(struct student s3[],0);
        }
    }
    else{
        assign(struct student s3[],2);
        if(s[0].score.cgpa>s[1].score.cgpa){
            assign(struct student s3[],0);
            assign(struct student s3[],1);
        }
        else{
            assign(struct student s3[],1);
            assign(struct student s3[],0);
        }
    }
    
}

int main(){
    int a;
    struct student s[3];
    for(int i=0;i<3;i++){
        printf("Enter the roll no\n");
        scanf("%d",&s[i].rollno);
        printf("Enter the name\n");
        scanf("%s",s[i].name);
        printf("Enter 1 if you enter marks else enter 2 if you enter cgpa\n");
        scanf("%d",&a);
        if (a==1)
        {
             printf("Enter three marks\n");
             scanf("%d %d %d",&s[i].a.marks[0],&s[i].a.marks[1],&s[i].a.marks[2]);
             s[i].score.cgpa=((s[i].a.marks[0]+s[i].a.marks[1]+s[i].a.marks[2])/300)*10;
        }
        else{
            printf("Enter the cgpa\n");
            scanf("%f",&s[i].score.cgpa);
        }
        
       ascending(s[3]);

    }
    

}