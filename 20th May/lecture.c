//Struct array with pointer

// #include<stdio.h>
// int main (){
//     struct stu{
//         int roll;
//         int age;
//         float cgpa;
//     }s[3];
//     struct stu *a=&s[0];
//     printf("Enter the roll no, age and cgpa of the students");
//     for(int i=0;i<3;i++){
//         scanf("%d%d%f",&(*(a+i)).roll,&(*(a+i)).age,&(*(a+i)).cgpa);
//     }
//     for(int i=0;i<3;i++){
//         printf("The roll no is%d\n The age is%d\n The cgpa is %f\n",(*(a+i)).roll,(*(a+i)).age,(*(a+i)).cgpa);
//     }

// }

#include<stdio.h>

 struct stu{
        int roll;
        float m[3];
        float d;
    };


void cal(struct stu *d){
    float sum=0;
    for (int i = 0; i < 3; i++)
    {
        sum=sum+(*d).m[i];
    }
    (*d).d=sum/3;
}

int main (){
    struct stu s;
    scanf("%d",&s.roll);
    for (int i = 0; i < 3; i++)
    {
        scanf("%f",&s.m[i]);
    }
    cal(&s);
    printf("The average is %f",s.d);
}
    
    
