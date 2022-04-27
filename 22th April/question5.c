#include<stdio.h>
int main(){
		int a=1,n,temp=0;
		int i=5;
		loop1:
		if(i%2!=0){
			n=1;
			loop2:
			if(i!=5)
				a=temp+n+4;
			else
				a=temp+n;
			n++;
			printf("%d ",a);
			if(n<=i)
				goto loop2;
			i--;
			temp=temp+5;
			printf("\n");	
		}else{
			n=4;
			int temp2=1;
			loop3:
			a=temp+n;
			n--;
			printf("%d ",a);
			temp2++;
			if(temp2<=i)
				goto loop3;
			i--;
			printf("\n");	
		}
		if(i>0)
			goto loop1;
}
