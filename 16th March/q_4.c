#include <stdio.h>

int main(){
    int x,y,z,a;
    scanf("%d",&x);
    a=x;
    y=x%10000;
    z=y/10;
    printf("The middle 3 number of %d is %d",a,z);
    return 0;


}