#include<stdio.h>
int main(){
    int a=1,b=1,i=1;
    for(a=1;a<=9;a++){
       for(b=1;a>=b;b++)
       printf("%d*%d=%-2d ",a,b,a*b);
    printf("\n");
    }
        
    system("pause");
    return 0;
}
