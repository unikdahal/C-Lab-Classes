//find the 7th position fibonacci number


#include <stdio.h>

int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main(){
    int a=0,b=1,c=0;
    printf("The 7th position no is %d",fibonacci(7));
    
}