#include<stdio.h>
int main(){
    float n=0,a=0,b=0;
    int i=0;
    
    scanf("%f",&n);
    a=b=n;
    for(i=0;i<9;i++){
        scanf("%f",&n);
        if(a<n){
            a=n;
        }
        if(b>n){
            b=n;
        }
    }
    printf("%.1f\n%.1f\n",b,a);

    return 0;
}