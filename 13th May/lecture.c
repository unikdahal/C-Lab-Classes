//Function

// If you pass an arguement and change its value outside the function, the value of the arguement will not be changed.
// so the value of the arguement will be changed only after passing the address in the arguement.

// #include <stdio.h>
// int add(int a, int b,int *c)
// {
//     *c=a-b;
//     int d=a+b;
//     return d;
// }
// int main()
// {
//     int a,b,c;
//     printf("Enter the value of a and b\n");
//     scanf("%d%d",&a,&b);
//     add(a,b,&c);
//     printf("The sum of a and b is %d\n",add(a,b));
//     printf("The difference of a and b is %d\n",c);
//     return 0;
// }

// #include<stdio.h>

// void f1(int b[][5]){
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 5; i++)
//         {
//             printf("%d\t",b[i][j]);
//             b[i][j]=b[i][j]+1;
//         }
        
//     }
    
// }
// int main(){
//     int a[4][5]={(1,2,3,4,9),(1,2,3,4,9),(1,2,3,4,9),(1,2,3,4,9)};
//     f1(a);
// }

// #Recursive Function

// if a function is called recursively, it will call itself again and again.

#include<stdio.h>

factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int main(){
    int a=5;
    int no=factorial(a);
    printf("%d\n",no);