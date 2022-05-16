//Interchange the values with the help of pointers

#include<stdio.h>
int main(){

    int a=5;
    int b=6;

    int *aptr=&a;
    int *bptr=&b;

    *aptr=a+b;
    *bptr=*aptr-b;
    *aptr=*aptr-*bptr;

    printf("The value of a is %d \n",*aptr);
    printf("The value of b is %d",*bptr);

    return 0;
}