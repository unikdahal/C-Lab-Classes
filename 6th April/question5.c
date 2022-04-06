#include<stdio.h>
int main(){
	int a,b;
	printf("Enter two years");
	scanf("%d %d",&a,&b);
	while(a<=b){
		if((a%4==0)&&(a%100!=0||a%400==0)){
		printf("%d\n",a);
		}
		a++;
	}
	return 0;
}
