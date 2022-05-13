//WAP TO DIFFERENTIATE CALL BY VALUE AND CALL BY REFERENCE

#include<stdio.h>

int f1(int a){
    a++;
}
int f2(int **b){
    (**b)++;
}


int main(){
    int a=5;
    int *b=&a;
    f1(a);
    printf("%d\n",a);
    f2(&b);
    printf("%d\n",a);
    return 0;
}