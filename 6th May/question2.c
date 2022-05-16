//Take a string and reverse it


#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

	char a[n];
	scanf("%[^/n]s",a);

    for ( int i = n; i >=0; i--)
    {
        printf("%c",a[i]);
    }
    
}