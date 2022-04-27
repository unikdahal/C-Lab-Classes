#include<stdio.h>
int main(){	
	int n,temp1,temp2,sum;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
	}	
	
	for(int i=1;i<n;i++){
			temp1=arr[i-1];
			temp2=arr[i];
			sum=temp1+temp2;
			arr[i]=sum;
	}	
	for(int i=0;i<n;i++){
			printf(" %d",arr[i]);
	}
	
}
