#include<stdio.h>
int main(){
        int n,a;
        a=10;
        for(int i=1;i<=4;i++){
		for(int j=1;j<=i;j++){
			printf("%d",a);
			a--;
		}
		printf("\n");
	}
	return 0;
}

