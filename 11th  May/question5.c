//Take a string and reverse it's each word 

// ABC  PK LTM n
// CBA_KP_MTL_n

#include<stdio.h>
int main(){
    char a[100];
    int i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
    printf("Enter a string\n");
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++){
        if(a[i]==' '){
            for(j=i-1;j>=0;j--){
                printf("%c",a[j]);
            }
            printf(" ");
        }
    }
    for(k=i-1;k>=0;k--){
        printf("%c",a[k]);
    }
    return 0;
}