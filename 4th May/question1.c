#include<stdio.h>
int main(){
		
		int a=4;
		int b=5;

		int *aptr=&a;
		int *bptr=&b;

		scanf("%d",aptr);
		scanf("%d",bptr);

		printf("%d\n",a);
		printf("%d\n",b);
		printf("%p\n",aptr);
		printf("%p\n",bptr);
		return 0;
		
}