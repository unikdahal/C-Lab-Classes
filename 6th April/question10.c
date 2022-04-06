#include<stdio.h>
int main(){
	int a,b=2,i=1,fact=1;
	float sum=0;
	scanf("%d",&a);
	while(i<=b){
		fact=fact*b;
		i++;
	}
	sum=sum+(float)(1/(fact*1.0));
}
