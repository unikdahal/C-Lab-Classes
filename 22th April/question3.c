#include<stdio.h>
 main(){
	int a,b,c,d,e;
	printf("Enter any three numbers");
	scanf("%d %d %d",&a,&b,&c);
	printf("%d \n%d \n",a,b);
	e=1;
	loop1:
	d=a+b;
	a=b;
	b=d;
	e++;
	printf("%d \n",d);
	if(e<c)
		goto loop1;
	return 35;
	
	
	
	
}
