#include<stdio.h>

int main(){
	int arr1[3][3]={{1,2,3},{1,2,3},{1,2,3}};
	for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
					printf("%d",arr1[j][i]);
			}
			printf("\n");
	}
}
