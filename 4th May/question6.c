//Reverse the arraay using pointer
#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    int *aptr=a+4;
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",*aptr);
        aptr--;
    }
    
}