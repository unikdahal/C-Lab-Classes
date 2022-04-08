#include<stdio.h>
int main(){
	int a,b,i=1,sum=0;
	printf("Enter the two integer");
	scanf("%d %d",&a,&b);
	while(a<b){
		i=1;
		while(i<=a){
			if(i*i==a){
				sum=sum+a;
				break;
			}
			i++;
		}
		a++;
	}
	printf("The sum is %d",sum);
}
