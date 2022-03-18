#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);

    int rev1 = x % 10;
    int rev2 = (x / 10) % 10;
    int rev3 = (x / 100);

    int result=rev1*100+rev2*10+rev3;

    printf("The reverse number is: %d",result);
}