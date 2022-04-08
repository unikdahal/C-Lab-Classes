#include<stdio.h>
int main(){
	int a,b,i=2,count=0;
	scanf("%d %d",&a,&b);
	while(a<b){
	i=1;
		while(i<=a){
			if(a%i==0){
				count=count+1;
			}
			i++;
		}
		if(count<=2){
			printf("%d \n",a);
		}
	a++;
	count=0;
	}
}
