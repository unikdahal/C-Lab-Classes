#include<stdio.h>
int main(){
		
		int a=4;
		int b=5;
		char c='c';

		int *aptr=&a;
		int *bptr=&b;
		char *cptr=&c;

		scanf("%d",aptr);
		scanf("%d",bptr);
		scanf("%c",cptr);

		printf("%d\n",a);
		printf("%d\n",b);
		printf("%c\n",c);
		printf("%p\n",aptr);
		printf("%p\n",bptr);
		printf("%p\n",cptr);
		return 0;
		
}