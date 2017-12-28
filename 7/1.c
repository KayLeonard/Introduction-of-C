#include<stdio.h>
int main(){
    void time(int t);
    int t=0;
    
    scanf("%d",&t);
    time(t);

    return 0;
}

void time(int t){
    float s=0,h=0,m=0;
    s=t;
    m=s/60;
    h=m/60;
    printf("%.2f %.2f %.2f",h,m,s);
}