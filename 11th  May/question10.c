/*
1/1! +1/3! +2/5! + 3/7! + 5/9! + 8/11! + 13/13! + 21/15! + 34/17!  +

*/

#include<stdio.h>
float fact(int n){
    float fact=1;
    while (n>0)
    {
        fact=fact*n;
        n--;
    }
    return fact;
    
}
float f1(int n){
    int a=1,b=1,i=1,c;
    float sum=0;
    sum= sum + a*1.0/(fact(2*i-1));
    i++;
    sum= sum + b*1.0/(fact(2*i-1));
    i++;
    while (i<=n)
    {
        c=a+b;
        sum= sum + c*1.0/(fact(2*i-1));
        a=b;
        b=c;
        i++;
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("The sum is %f",f1(n));
}