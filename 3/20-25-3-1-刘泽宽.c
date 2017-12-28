#include<stdio.h>
int main(){
    int y;
    for(y=2000;y<=2050;y++){
        if(y%4==0&&y%100!=0||y%400==0){
            printf("%d\n",y);
        }

    }

    printf("\n");

    y=2000;
    while(y<=2050){
        if(y%4==0&&y%100!=0||y%400==0){
            printf("%d\n",y);
        }
        y++;
    }

    printf("\n");
    
    y=2000;
    do{
        if(y%4==0&&y%100!=0||y%400==0){
            printf("%d\n",y);
        }
        y++;
    }while(y<=2050);

    return 0;
}