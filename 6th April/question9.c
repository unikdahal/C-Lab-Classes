#include<stdio.h>
int main(){
	int a,b=1,fact=1;
	scanf("%d",&a);
	while(b<=a){
		fact=fact*b;
		b++;
	}
	printf("%d",fact);
}


