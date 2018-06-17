#include<stdio.h>
int main(){
    struct{
        int no;
        char name[20];
        int as;
        int mp;
    }a[5];
    int i=0;

    for(i=0;i<5;i++){
        scanf("%s %d",a[i].name,&a[i].as);
    }

    for(i=0;i<5;i++){
        a[i].no=i+1;
    }

    for(i=0;i<5;i++){
        a[i].mp=a[i].as/12*0.8;
    }

    for(i=0;i<5;i++){
        printf("%d %6s %6d %5d\n",a[i].no,a[i].name,a[i].as,a[i].mp);
    }
    return 0;
}