#include<stdio.h>
int main(){
    char str[100];
    int l=0,p=0,i=0;
    gets(str);
    scanf("%d %d",&l,&p);
    for(i=p-1;str[i+l]!=0;i++){
        str[i]=str[i+l];
    }
    str[i]=0;
    puts(str);

    return 0;
}