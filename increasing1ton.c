#include<stdio.h>
void increasing(int x,int n){
    if (x>n) return;
    printf(" %d ", x);
increasing(x+1,n);
 return;


}
int main(){
  int p;
    printf("enter final ");
    scanf("%d", &p);
    increasing(1,p);
    
    return 0;

}