//Take an int array and display each element in the array using the pointer

#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    int *aptr=a;
    int i;
    for(i=0;i<5;i++){
        printf("%d\n",*aptr);
        aptr++;
    }
    return 0;
}