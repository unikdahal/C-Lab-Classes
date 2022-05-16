/*
1/1! +1/3! +2/5! + 3/7! + 5/9! + 8/11! + 13/13! + 21/15! + 34/17!  +

*/

#include<stdio.h>
int fact(int n){
    int fact=1;
    while (n>0)
    {
        fact=fact*n;
        n--;
    }
    return fact;
    
}
int f1(int n){
    int a=1,b=1,i=0,c;
    while (i<n)
    {
        c=a+b;
        printf("%d",c/(fact(2*i-1)));
        a=b;
        b=c;
        i++;
    }
    return c;
}
int main(){
    int n;
    scanf("%d",&n);
    f1(n);
}