//WAF TO DISPLAY NTH FIBONACCI NUMBER

#include<stdio.h>

int f1(int n){
    int a=1,b=1,i=1,c;
    while (i<n-1)
    {
        c=a+b;
        a=b;
        b=c;
        i++;
    }
    return c;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",f1(n));
}