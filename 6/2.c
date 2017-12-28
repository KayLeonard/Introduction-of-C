#include<stdio.h>
int main(){
    int a=0,b=0,c=0;
    
    scanf("%d %d %d",&a,&b,&c);
    int tem=0;
    if(a>b){
        tem=a;
        a=b;
        b=tem;
    }
    tem=0;
    if(b>c){
        tem=b;
        b=c;
        c=tem;
    }
    tem=0;
    if(a>b){
        tem=a;
        a=b;
        b=tem;
    }
    printf("%d %d %d",a,b,c);

    return 0;
}