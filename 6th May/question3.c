// Print in the format 

// UNIKDA
//  NIKDA
//   IKDA
//    KDA
//     DA
//      A

#include<stdio.h>
int main(){

    char a[6];
    scanf("%[^\n]s",a);

    for (int i = 0; i < 6; i++) 
    {  

        for (int j = 0; j<i; j++)
        {
            printf(" ");
        }
        
        printf("%s\n",a+i);

    }
    return 0;
    
}