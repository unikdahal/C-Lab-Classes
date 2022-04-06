#include<stdio.h>
int main(){
	int a,b;
	printf("Enter any two numbers");
	scanf("%d %d",&a,&b);
	while(a<b){
		if((a%7==0)&&(a%8==0)){
			printf("%d \n",a);
		}
		a++;
	}
}
