#include<stdio.h>
void leap(int y);
int main(){
    int y=0;
    scanf("%d",&y);
    leap(y);
    return 0;
}

void leap(int y)
{   
    if(y%4==0&&y%100!=0||y%400==0){
        printf("yes");
    }else{
        printf("no");
    }
}