//Reverse a number using recursive function
#include<stdio.h>
void dis(int n){;
    if(n>0)
    {
        printf("%d",n%10);
        dis(n/10);   
    }
}
    int main(){
        int n;
        scanf("%d",&n);
        dis(n);
        return 0;
}
