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
