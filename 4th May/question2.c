//Triple Pointer and its related values

#include<stdio.h>
int main(){
        
        int a=4;
        int *b;
        b=&a;
        printf("The value of a is %d\n",a);
        printf("The address of a is %p\n",&a);
        printf("\n");
        printf("The value of b is %p\n",b);
        printf("The address of b is %p\n",&b);

         printf("\n");
        int **c;
        c=&b;
        printf("The value of c is %p\n",c);
        printf("The address of c is %p\n",&c);
         printf("\n");
        int ***d;
        d=&c;
        printf("The value of d is %p\n",d);
        printf("The address of d is %p\n",&d);
        return 0;
        
}
