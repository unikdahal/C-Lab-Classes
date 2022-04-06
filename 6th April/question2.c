#include<stdio.h>
int main(){
	int a=1;
	while(a<=100){
		printf("%d	%d\n",a,(100-a+1));
		a++;
	}
	return 0;
}
