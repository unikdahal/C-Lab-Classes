//WAS for a date which will take your date of birth and pass this data to a function which will calculate age and return back the age to the main function

#include<stdio.h>
struct dat
{
    int dd,mm,yy;
};

int presentAge(struct dat a,struct dat b,struct dat c){
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
    return c.yy*365+c.mm*30+c.dd;
}


int main(){
    struct dat a,b,c;
    printf("Enter your date of birth in the format yy-mm-dd");
    scanf("%d-%d-%d",&a.yy,&a.mm,&a.dd);
    printf("Enter today date  in the format yy-mm-dd");
    scanf("%d-%d-%d",&b.yy,&b.mm,&b.dd);

    int total=presentAge(a,b,c);
    int year=total/365;
    int month=(total%365)/30;
    int day=(total%365)%30;
    printf("You're  %d years %d month %d days old",year,month,day);
    

}

