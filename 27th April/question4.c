#include<stdio.h>
int main(){
	int n,a,b=0,c;
		scanf("%d %d",&n,&a);
		c=n-1;
		int arr[n];
		for(int i=0;i<n/2;i++){
				a=a-b;
				arr[i]=a;
				b++;
				a=a-b;
				arr[c]=a;
				b++;
				c--;
		}

		for(int i=0;i<n;i++){
			printf(" %d",arr[i]);
		}
}
