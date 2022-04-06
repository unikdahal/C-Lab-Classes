#include<stdio.h>
int main(){
	int a,b,s=0;
	printf("Enter two integer");
	scanf("%d %d",&a,&b);
	while(a<b){
		if(a%2==0){
			s=s+a;
		}
		a++;
	}
	printf("The sum is %d",s);
}
