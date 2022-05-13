#include<stdio.h>

int f1(int **c){
    (**c)++;
    return 0;
}
int main(){
    int a=5;
    int *b=&a;
    f1(&b);
    printf("%d\n",a);
}
