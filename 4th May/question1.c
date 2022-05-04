#include<stdio.h>
int main(){
		
		int a=4;
		int *b=&a;
		*b=6;
		printf("%d\n",a);
		printf("%d\n",*b);
		printf("%p\n",&*b);
		printf("%p\n",b);
		printf("%p\n",&a);
		printf("%p\n",b+1);

		return 0;
		
}