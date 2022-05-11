//Function to find the factorial

#include<stdio.h>
int f1(int n){
    int fact=1;
    while (n>0)
    {
        fact=fact*n;
        n--;
    }
    return fact;
    
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",f1(n));
}