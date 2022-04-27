#include<stdio.h>
int main(){
		int n,temp;
		scanf("%d",&n);
		int arr[n];
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}	
		for(int i=0,j=n/2-1,k=n-1;i<n;i++){
				
				if(i<=2 && i<j){
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
					j--;
				}
					
					
				if(i>2 && i<k){
					temp=arr[i];
					arr[i]=arr[k];
					arr[k]=temp;
					k--;
				}
					
			
		}
		for(int i=0;i<n;i++){
			printf(" %d",arr[i]);
		}
		
		
}
