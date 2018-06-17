#include<stdio.h>
#include<string.h>
int main(){
    char a[4][20];
    int l[4]={0};

    for(int i=0;i<4;i++){
        scanf("%s",a[i]);
    }

    for(int i=3;i>=0;i--){
        printf("%s ",a[i]);
    }
    printf("\n");

    for(int i=0;i<4;i++){
        l[i]=strlen(a[i]);
    }

    for(int i=0;i<4;i++){
        for(int j=l[i];j>=0;j--){
            printf("%c",a[i][j]);
        }
        printf(" ");
    }
    printf("\n");

    for(int i=3;i>=0;i--){
        for(int j=l[i];j>=0;j--){
            printf("%c",a[i][j]);
        }
        printf(" ");
    }


    return 0;
}