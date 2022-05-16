//Take a 10 size array and fill the value in the following manner
// 14 29 40 47 50 49 44 35 22 5

#include<stdio.h>
int main(){
    int a[10];
    int b=50,c=1,d=5;

    for(int i=4;i>=0;i--){
        a[i]=b;
        b=b-c;
        c++;
        a[d]=b;
        b=b-c;
        c++;
        d++;
    }
for (int i = 0; i < 10; i++)
{
    printf("%d\n",a[i]);
}
}