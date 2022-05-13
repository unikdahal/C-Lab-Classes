//Display the elements of array with function

#include<stdio.h>
void f1(int *b){
    printf("%d\n",*b);
}
int main(){

    int a[5]={1,2,3,4,9};
    for (int i = 0; i < 5; i++)
    {
        f1(&a[i]);
    }
    return 0;
}