#include<stdio.h>
int main(){
    int l=0,row=1,i=1;

    scanf("%d",&l);
    
    for(i=1;i<=l;i++)
        printf(" ");
    printf("*");
    for(i=1;i<=l;i++)
    printf(" ");
    printf("\n");
    
    for(row=1;row<=l;row++){
        for(i=1;i<=l-row;i++)
            printf(" ");
        printf("*");
        for(i=1;i<=2*row-1;i++)
            printf(" ");
        printf("*");
        for(i=1;i<=l-row;i++)
        printf(" ");
        printf("\n");
    }
    
    for(row=9;row>=1;row--){
        for(i=1;i<=l-row;i++)
            printf(" ");
        printf("*");
        for(i=1;i<=2*row-1;i++)
            printf(" ");
        printf("*");
        for(i=1;i<=l-row;i++)
        printf(" ");
        printf("\n");
    }

    for(i=1;i<=l;i++)
        printf(" ");
    printf("*");
    for(i=1;i<=l;i++)
        printf(" ");
    printf("\n");
    
        return 0;
}