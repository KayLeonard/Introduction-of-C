#include<stdio.h>
int main(){
    int a[10],sum=0,i=0;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    
    for(i=0;i<10;i++){
        printf("%d\n",a[i]);
    }
    
    printf("%d",sum);
    
    return 0;
}