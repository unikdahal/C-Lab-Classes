//To find the lowest among three number

#include<stdio.h>
int main(){

    int a=5;
    int b=6;
    int c=7;

    int *aptr=&a;
    int *bptr=&b;
    int *cptr=&c;

    if(aptr<bptr){
        if(aptr<cptr){
            printf("%d\n",*aptr);
        }
        else{
            printf("%d\n",*cptr);
        }
    }
    else{
        if(bptr<cptr){
            printf("%d\n",*bptr);
        }
        else{
            printf("%d\n",*cptr);
        }
    }
    return 0;
}