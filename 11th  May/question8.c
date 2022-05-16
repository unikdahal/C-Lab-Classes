//WAP to display fibonacci series upto nth position

#include<stdio.h>

int f1(int n){
    int a=1,b=1,i=1;
    printf("%d %d ",a,b);
    while (i<n-1)
    {
        int c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        i++;
    }
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    f1(n);
}