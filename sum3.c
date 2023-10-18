#include<stdio.h>
int sum(int n){
if(n==1||n==0) return 1;
int sumi;
sumi=n+sum(n-1);
return sumi;}
int main(){
    int n;
    printf("enter a number");
   scanf("%d", &n);
   int fact=sum(n);
   printf("%d",fact);
    return 0;
}