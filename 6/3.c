#include<stdio.h>
int main(){
    int sum(int);
    int num=0;

    scanf("%d",&num);
    printf("%d",sum(num));
    
    return 0;
}

int sum(int n){
    if(n==1){
        return 1;
    }else{
        return (sum(n-1)+n);
    }
}