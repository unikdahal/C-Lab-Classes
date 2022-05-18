//Write a recursive function which will return sum of all the integers present in a array

#include<stdio.h>

int sum(int *c, int start, int len){
    if(start>len){
        return 0;
    }
    start++;
    return *c+sum(c+1,start,len);
}

int main(){
    int a[5]={1,2,3,4,5};
    printf("The sum is %d",sum(a,1,5));
    return 0;
}
