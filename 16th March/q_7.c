#include <stdio.h>
int main()
{
    int x;
    printf("Enter a 5 digit number:");
    scanf("%d", &x);
    int s1 = x % 100;
    int s2 = x / 100;
    s2 = s2 % 10;
    int s3 = x / 1000;

    int s4= s1*1000+s2*100+s3;

    printf("The result is %d",s4);
    return 0;
    
}