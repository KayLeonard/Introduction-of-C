#include<stdio.h>
int main(){
    int a[3],b[3],i=0;

    for(i=0;i<3;i++){
        scanf("%d %d",&a[i],&b[i]);
    }
    
    for(i=0;i<3;i++){
        if(a[i]<b[i]){
            a[i]=b[i];
        }
    }
    printf("%d",a[0]+a[1]+a[2]);
    return 0;
}