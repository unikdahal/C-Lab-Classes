//WAP To print all numbers from user input to 1 using go to
#include<stdio.h>
int main(){
		int a;
		printf("Enter any number");
		scanf("%d",&a);
		loop1:
		printf("%d\n",a--);
		if(a>0)
			goto loop1;
}
