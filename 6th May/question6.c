#include<stdio.h>
int main(){
    int arr[4][4],sumarr[2][2]={0};
    for(int i=0;i<4;i++){
		for(int j=0;j<4;j++)
			scanf("%d",&arr[i][j]);
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i<2 && j<2){
                sumarr[0][0]=sumarr[0][0]+arr[i][j];
            }
            else if(i<2 && j>=2){
                sumarr[0][1]=sumarr[0][1]+arr[i][j];
            }
            else if(i>=2 && j<2){
                sumarr[1][0]=sumarr[1][0]+arr[i][j];
            }
            else{
                sumarr[1][1]=sumarr[1][1]+arr[i][j];
            }
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",sumarr[i][j]);
        }
        printf("\n");
    }
}