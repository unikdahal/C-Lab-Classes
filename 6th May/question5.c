//Swap 2*2 matrix in 4*4

#include<stdio.h>
int main(){
    int arr[4][4],temp1[4][4];
    for(int i=0;i<4;i++){
		for(int j=0;j<4;j++)
			scanf("%d",&arr[i][j]);
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i<2 && j<2){
                temp1[i+2][j+2]=arr[i][j];
            }
            else if(i<2 && j>=2){
                temp1[i+2][j-2]=arr[i][j];
            }
            else if(i>=2 && j<2){
                temp1[i-2][j+2]=arr[i][j];
            }
            else{
                temp1[i-2][j-2]=arr[i][j];
            }
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d ",temp1[i][j]);
        }
        printf("\n");
    }
    return 0;
}