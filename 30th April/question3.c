//Multiplication Of Matrices

#include<stdio.h>
int main(){
	int arr1[3][3]={{1,2,3},{1,2,3},{1,2,3}};
	int arr2[3][3]={{2,3,4},{2,3,4},{2,3,4}};
	int arr3[3][3]={0};
	
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<3;k++){
			
			arr3[i][j]=arr3[i][j]+arr1[i][k]*arr2[k][j];
				
			}
		}
			
		}
	
	for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
					printf("%d  ",arr3[i][j]);
			}
			printf("\n");
	}
}
