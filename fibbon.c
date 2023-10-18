#include<stdio.h>
int fibo(int n){
    //1 1 2 3 5 8 13 21
    if (n==1||n==2)
    return 1;
   int  facto=fibo(n-1)+fibo(n-2);
   return facto;
}
int main(){
    int n;
    printf("enter n");
    scanf("%d", &n);
    printf("%d", fibo(n));
    return 0;
}