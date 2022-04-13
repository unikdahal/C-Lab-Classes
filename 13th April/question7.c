#include<stdio.h>
int main(){
        int n;
        printf("Enter any number");
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
                for(int j=1;j<=i;j++)
                {
			if(i%2==0){
	          	   printf("*");
			}else{
			   printf("%d",j);
			}
                }
                printf("\n");
        }
}

