//Write a structure for date 
#include<stdio.h>
struct dat
{
    int dd,mm,yy;
};
int main(){
    struct dat a;
    printf("Enter the date");
    scanf("%d",&a.dd);
    printf("Enter the month");
    scanf("%d",&a.mm);
    printf("Enter the year");
    scanf("%d",&a.yy);
    printf("%d-%d-%d",a.yy,a.mm,a.dd);
}
