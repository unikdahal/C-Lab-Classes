#include<stdio.h>
int main(){
	printf("Enter any number");
	int n;
	scanf("%d",&n);
	for(int i=1;i<n;i++)
	{
		printf("%d + %d = %d\n",i,(n-i),n);
	}
}
