//Take 3 student information related  to the above question and find out the average marks and min mark in the whole class.

#include<stdio.h>

int min(int a,int b,int c){
    if(a<b && a<c){
        return a;
    }
    else if(b<a && b<c){
        return b;
    }
    else{
        return c;
    }
}
int main(){
    struct student
    {
        char name[20];
        int m[3];
        int min;
    }s[3];
    for (int  i = 0; i < 3; i++)
    {
        printf("Enter the name of the student");
        scanf("%s",s[i].name);
        printf("Enter the marks of the student in 3 subjects");
        scanf("%d%d%d",&s[i].m[0],&s[i].m[1],&s[i].m[2]);
        s[i].min=min(s[i].m[0],s[i].m[1],s[i].m[2]);
    }
    for (int  i = 0; i < 3; i++)
    {
        printf("The name of the student is %s\n",s[i].name);
        printf("The average marks of the student is %d\n",(s[i].m[0]+s[i].m[1]+s[i].m[2])/3);
        printf("The minimum marks of the student is %d\n",s[i].min);
    }
    
    printf("The minimum marks of class is %d",min(s[0].min,s[1].min,s[2].min));
    return 0;
}
