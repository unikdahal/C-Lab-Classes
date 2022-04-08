#include<stdio.h>
int main(){
	int a,b;
	scanf("%d",&a);
	int d=a,count=0;
	while(d>0){
		count=count+1;
		d=d/10;
	}
	count=count/2;
	while(count>0){
		a=a/10;
		count--;
	}
	int midno=a%10;
	printf("The middle no is %d",midno);
}

