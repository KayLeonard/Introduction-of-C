#include<stdio.h>
int main(){
    float num[100],max;
    int i=0,cnt=0,pos=0;

    do{
        scanf("%f",&num[i]);
        cnt++;
    }while(num[i++]!=-1);

    max=num[0];
    i=0;

    while(i<cnt){
        if(max<num[i]){
            max=num[i];
            pos=i;
        }
        i++;
    }

    printf("%d %.2f",pos,max);

    return 0;
}