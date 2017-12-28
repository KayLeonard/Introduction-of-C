#include<stdio.h>
int main(){
    int i=0,num=0;
    int len(int);
    
    scanf("%d",&num);
    
    printf("%d",len(num));

    return 0;
}

int len(int n){
    if(n<=10){
        return 1;
    }else{
        return(len(n/10)+1);
    }
}