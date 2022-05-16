//Take a three word string and display its middle word and count the number of letters present in the middle word

#include<stdio.h>
int main(){

    char a[50],b[50],j=0;
    scanf("%[^\n]s",a);
    int count=0;
    for (int  i = 0;a[i]!='\0'; i++)
    {
        if(a[i]==' '){
            count++;
        }
        if(count==1){
            b[j]=a[i+1];
            j++;

        }
    }

    printf("The middle word is %s \n",b);
    printf("The number of letters in middle word is %d",j-1);
    return 0;
	
}
