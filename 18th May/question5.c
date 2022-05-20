#include<stdio.h>
int reverse(int n,int sum){
    if (n>0){
		sum=sum*10+n%10;
        return reverse(n/10,sum);
	}else{

        return sum;
    }
}
int main(){
    int no;
    printf("Enter the number");
    scanf("%d",&no);
    int revNum=reverse(no,0);
    printf("%d",revNum);
    return 0;
}
