#include<stdio.h>
#include<math.h>
int main(){
	int a,i=2,count=0;
	scanf("%d",&a);
	while(i<(a/2)){
		if(a%i==0){
			count=count+1;
			break;
		}
		i++;
	}
	if(count==0){
		printf("prime");
	}else{
		printf("Not prime");
	}
}
