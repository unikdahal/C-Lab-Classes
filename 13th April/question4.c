#include<stdio.h>
int main(){
        int n;
        printf("Enter any number");
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
                for(int j=1;j<=i;j++)
                {
                        printf("1");
                }
                printf("\n");
        }
}
