//WAP TO DISPLAY A TO Z USING GOTO
#include<stdio.h>
int main(){
	char a;
	
	a=65;
	
	loop1:
	printf("%c \n",a);
	a++;
	
	if(a<91)
		goto loop1;
}
