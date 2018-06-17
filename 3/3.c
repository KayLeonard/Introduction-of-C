#include<stdio.h>
int main(){
    char a[3];
    int i=0;

    for(i=0;i<=2;i++)
        scanf("%c",&a[i]);
    
    if(a[0]+1==a[1]&&a[1]==a[2]-1||a[0]-1==a[1]&&a[1]==1+a[2])
        printf("adjacent");
    else{printf("not adjacent.");}
    return 0;
}