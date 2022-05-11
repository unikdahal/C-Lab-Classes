// String 

// Function

#include<stdio.h>
int add(int num1,int num2){         //Defination of the function
    return num1+num2;
}

int main(){
    int a,b,sum;
    scanf("%d %d",&a,&b);
    sum=add(a,b);                //Calling of a function
    printf("%d",sum);
    return 0;
}

/* Function Syntax


<returntype><functionname>(parameter 1,parameter 2,......){

    statement 
    return value
}