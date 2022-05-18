//Write a recursive function to reverse the string

#include<stdio.h>
int dis(char *c, int start, int len){
    if(start>len){
        return 0;
    }
    start++;
    printf("%c",c[4]);  
    dis(c-1,start,len);
    return 0;
}
int main(){
    char a[5]="abcde";
    dis(a,1,5);
    return 0;
}
