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

//Reverse the string

#include<stdio.h>
int main(){
	char a[6];
    printf("Enter a string of 6 characters");
	scanf("%[^\n]s",a);

    for (int  i = 0,j=5; i <j; i++,j--)
    {
        char temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        

    }
	printf("%s",a);
}


*/