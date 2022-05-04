#include<stdio.h>
int main(){
        int a=5
        int *b=&a;
        int b=6;
        int c=7;
        int d=8;
        int **c=&b;
        int ***d=&c;

        printf("%d\n",a);
        printf("%d\n",*b);
        printf("%p\n",&*b);
        printf("%p\n",b);
        printf("%p\n",&a);
        printf("%p\n",b+1);
        printf("%p\n",&*b+1);
        printf("%p\n",&**c);
        printf("%p\n",&***d);
        printf("%p\n",&***d);
}
