//WAP To print all numbers from user input to 1 using do while

#include<stdio.h>
int main(){
	int a;
	printf("Enter any number");
	scanf("%d",&a);
	
	do{
		printf("%d\n",a--);
	}while(a>0);
	
}
