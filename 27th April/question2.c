#include<stdio.h>
int main(){
	
	int n,temp;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
	}	
	
	for(int i=0,j=n-1;i<j;i++,j--){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
	}	
	for(int i=0;i<n;i++){
			printf(" %d",arr[i]);
	}
	
}
