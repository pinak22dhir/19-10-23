#include<stdio.h>
int maze(int n,int m){
    int rigthways=0;
    int downways=0;
    //in loops important to daalna//321
   
if (n==1 && m==1) return 1;
if (n==1 ) {rigthways+=maze(n,m-1);}
if (m==1) {downways+=maze(n-1,m);}
if(n>1 && m>1) {rigthways+=maze(n,m-1);
downways+=maze(n,m+1);}
int totalways=rigthways+downways;
return totalways;

}
int main(){
    int a,p;
    printf("enter nows of rows: ");
    scanf("%d", &a);
    printf("enter number of columns ");
    scanf("%d", &p);
    int m=maze(a,p);
    printf("%d",m );
    return 0;
}