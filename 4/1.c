#include<stdio.h>
int main(){
int a=0;
scanf("%d",&a);
a%=2;
if(a==0)
printf("even");
else printf("odd");
return 0;
}