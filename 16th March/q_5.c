#include <stdio.h>
int main () {
    int x,y,z,a,b;
    scanf("%d",&x);
    y=x%10;
    z=(x/10)%10;
    a=(x/100)%10;
    b=(x/1000)%10;

    printf("The result is :\n");
    printf("%d \t %d \n%d \t %d \n%d \t %d \n%d \t %d \n",y,b,z,a,a,z,b,y);
    return 0;
}