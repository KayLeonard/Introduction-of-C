#include<stdio.h>
int main(){
    int num=1,isprime=1,cnt=0,n,p[100]={2},i;
    scanf("%d",&n);
    
    for(num=3;num<=n;num++){
        
        isprime=1;
        
        for(i=0;i<=cnt;i++){
            if(num%p[i]==0){
                isprime=0;
            }
        }
        
        if(isprime==1){
            cnt++;
            p[cnt]=num;
        }
    }

    printf("2");
    for(i=1;i<=cnt;i++){
        printf("\n%d",p[i]);
    }
    return 0;
}