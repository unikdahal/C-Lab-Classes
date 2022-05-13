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
    printf("The value of A doesn't change outside the function in call by value function .It still remains %d\n",a);
    f2(&b);
    printf("The value of A changes outside the function in call by refernce function .It changes to %d\n",a);
    return 0;
}