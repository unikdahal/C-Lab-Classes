//Take two dates using structure and write a function to find the difference between two dates.

#include<stdio.h>
struct dat
{
    int dd,mm,yy;
};
int diff(struct dat a,struct dat b){
    int d,m,y;
    d=b.dd-a.dd;
    m=b.mm-a.mm;
    y=b.yy-a.yy;
    if(d<0)
    {
        d=d+30;
        m--;
    }
    if(m<0)
    {
        m=m+12;
        y--;
    }
    return y*365+m*30+d;
}
 int main(){
    struct dat a,b;
    printf("Enter first date in the format yy-mm-dd");
    scanf("%d-%d-%d",&a.yy,&a.mm,&a.dd);
    printf("Enter second date in the format yy-mm-dd");
    scanf("%d-%d-%d",&b.yy,&b.mm,&b.dd); 
    int c=diff(a,b);
    int year=c/365;
    int month=(c%365)/30;
    int day=(c%365)%30;
    printf("The difference is %d years %d months %d days",year,month,day);
    return 0;

 }