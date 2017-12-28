#include<stdio.h>
int main(){
    float a[8];
    int i=0;
    for(i=0;i<8;i++){
        scanf("%f",&a[i]);
    }
    printf("%.2f\n%.2f\n%.2f\n%.2f\n%.2f",a[1],a[3],a[5],a[7],a[0]+a[2]+a[6]+a[4]);
    return 0;
}