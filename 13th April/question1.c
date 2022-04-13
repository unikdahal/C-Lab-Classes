#include<stdio.h>
int main(){
	printf("ENter any number");
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		printf("%d \t %d \n",i,(a-i+1));
	}
}
