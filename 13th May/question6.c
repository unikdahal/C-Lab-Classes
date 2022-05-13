//WAP WHICH WILL TAKE 3 INTEGER AND RETURN MAX AND MIN AMONG THREE INTEGER

#include<stdio.h>

int f1(int a,int b,int c,int *min){
    if (a<b && a<c)
    {
         *min=a;
    }
    else if (b<a && b<c)
    {
         *min=b;
    }
    else
    {
         *min=c;
    }
    
    if (a>b && a>c)
    {
        return a;
    }
    else if (b>a && b>c)
    {
        return b;
    }
    else
    {
        return c;
    }
    
}
    




int main(){
    int a,b,c,d;
    printf("Enter three integer\n");
    scanf("%d%d%d",&a,&b,&c);
    int e=f1(a,b,c,&d);
    printf("The max is %d\n",e);
    printf("The min is %d\n",d);
    return 0;
}