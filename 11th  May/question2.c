//Take a string with multiple words and display how many spaces are present in the string

#include<stdio.h>
int main(){

    char a[50];
    scanf("%[^\n]s",a);
    int count=0;
    for (int  i = 0;a[i]!='\0'; i++)
    {
        if(a[i]==' '){
            count++;
        }
    }
    printf("The number of spaces is %d",count);
    return 0;
	
}
