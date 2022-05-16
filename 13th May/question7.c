//WAP which take a three digit integer value and interchange the first and last digit and the new number will be displayed in main and the function return type is void

#include<stdio.h>

void f1(int **b){
    int c=**b%10;
    int d=(**b/10)%10;
    int e=(**b/100);

    **b=c*100+d*10+e;
}

int main(){
    int a;
    printf("Enter a three digit integer\n");
    scanf("%d",&a);
    int *b=&a;
    int c=**b;
    printf("The new number is %d\n",c);
    return 0;

}