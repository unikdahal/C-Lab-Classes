//count the number of word present in the string

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
    printf("The number of words is %d",count+1);
    return 0;
	
}

