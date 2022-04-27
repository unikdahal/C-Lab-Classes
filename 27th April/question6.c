#include<stdio.h>
int main(){	
	int n,temp1,temp2,sub;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
	}	
	
	for(int i=n-1;i>=0;i--){
			temp1=arr[i];
			temp2=arr[i-1];
			sub=temp1-temp2;
			arr[i-1]=sub;
	}	
	for(int i=0;i<n;i++){
			printf(" %d",arr[i]);
	}
}
	
