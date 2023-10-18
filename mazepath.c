#include<stdio.h>
int maze(int cr,int cc, int er,int ec ){
    int rigthways=0;
    int downways=0;
    //in loops important to daalna
   
if (er==cr && ec==cc) return 1;
if (er==cr ) {rigthways+=maze(cr,cc+1,er,ec);}
if (ec==cc) {downways+=maze(cr+1,cc,er,ec);}
if(cr<er && cc<ec) {rigthways+=maze(cr,cc+1,er,ec);
downways+=maze(cr+1,cc,er,ec);}
int totalways=rigthways+downways;
return totalways;

}
int main(){
    int n,p;
    printf("enter nows of rows: ");
    scanf("%d", &n);
    printf("enter number of columns ");
    scanf("%d", &p);
    int m=maze(1,1,n,p);
    printf("%d",m );
    return 0;
}