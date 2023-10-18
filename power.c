#include<stdio.h>
// void and main mein difference
int power(int a,int b){
    if(b==0) return 1;
    int power2= a*power(a,b-1);
    return power2;
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