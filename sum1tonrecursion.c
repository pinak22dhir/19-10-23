#include<stdio.h>
void sum(int n){
 int sumi=0;
 for(int i=1;i<=n;i++){
    // printf("%d",sumi);
    sumi=sumi+i;
 }
  printf("%d",sumi);
//  printf("%d",sumi);
return;
}
int main(){
int n;
printf("enter n");
scanf("%d",&n);
sum(n);

return 0;
}