#include<stdio.h>
// void and main mein difference
int power(int a,int b){
    if(b==0) return 1;
    if (b==1) return a;
    int c=power(a,b/2);
   if(b%2==0) return c*c;
   else 
   return c*c*a;
  
}
int main(){
int a,b;
printf(" enter a\n", a);
scanf("%d", &a);
printf("enter b\n", b);
scanf("%d", &b);
int p=power(a,b);
printf("%d",p);
return 0;

}