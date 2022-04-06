#include<stdio.h>
int main(){
	int a=3,b;
	float sum=0;
	printf("Enter an integer");
	scanf("%d",&b);
	while(a<=b){
		sum=sum+(float)(((a*1.0)-2)/(a*1.0));
		a=a+4;
	}
	printf("The sum is %f",sum);
	return 0;
}
