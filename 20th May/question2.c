//WAS for a date which will take your date of birth and pass this data to a function which will calculate age and return back the age to the main function

#include<stdio.h>
struct dat
{
    int dd,mm,yy;
};


int main(){
    struct dat a,b,c;
    printf("Enter your date of birth in the format yy-mm-dd");
    scanf("%d-%d-%d",&a.yy,&a.mm,&a.dd);
    printf("Enter today date  in the format yy-mm-dd");
    scanf("%d-%d-%d",&b.yy,&b.mm,&b.dd);

    if (b.dd>=a.dd)
    {
        c.dd=b.dd-a.dd;
    }
    else{
        c.dd=b.dd+30-a.dd;
        b.mm--;
    }
    if (b.mm>a.mm)
    {
        c.mm=b.mm-a.mm;
    }
    else{
        c.mm=b.mm+12-a.mm;
        b.yy--;
    }
    c.yy=b.yy-a.yy;
    
    printf("You're  %d years %d month %d days old",c.yy,c.mm,c.dd);
    

}

