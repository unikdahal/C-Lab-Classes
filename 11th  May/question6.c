//Take a string and display in the following format 

// AbcD PklM nT  VPR
//AbcD P. N. Vpr]

#include<stdio.h>
int main(){
    char a[100];
    scanf("%[^\n]s",a);
    int i,j,space=0,count=0;

    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            space++;
        }
    }

    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
            count++;
        
        if (count<1 || count>space-1)
        {
            printf("%c",a[i]);
        }
        else if(a[i]==' ')
        {
            printf(" %c.",a[i+1]);
        }
    }       
    
    return 0;
}