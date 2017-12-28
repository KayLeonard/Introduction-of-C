#include<stdio.h>
#include<math.h>
int judge(int);
int main(){
    int i=1,num[]={0},is[]={0},cnt=0;
    do{
        scanf("%d",&num[cnt]);   
    }while(num[cnt++]!=-1);

    for(i=0;i<cnt;i++){
        is[i]=judge(num[i]);
    }

    for(i=0;i<cnt;i++){
        if(is[i]==0){
            printf("no\n");
        }else{
            printf("yes\n");
        }
    }
    return 0;
}

int judge(int n){
    int t=0,c=0,n1[20gcc 1.c -o a0];
    for(c=0;n<10;c++){
        n1[c]=n%10;
        n/=10;
    }
    for(;c>=0;c--){
        t+=n1[c]*pow(10,c);
    }
    if(t==n){
        return 1;
    }else{
        return 0;
    }
}