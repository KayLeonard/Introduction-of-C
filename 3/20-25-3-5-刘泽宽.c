#include<stdio.h>
int main(){
    int a[11][11];
    int i=0,j=0;
    
    for(i=0;i<=10;i++){
        for(j=0;j<=10;j++){
            a[i][j]=0;
        }
    }

    for(i=0;i<=10;i++){
        for(j=0;j<=10;j++){
            if(i==1){
                if(j>=2&&j<=8&&j!=5)
                    a[i][j]=1;   
            }
            if(i==2){
                if(j>=1&&j<=9)
                    a[i][j]=1;
            }
            if(i>=3&&i<=8){
                if(j>=i-3&&j<=-i+13)
                    a[i][j]=1;
            }
        }
    }

    for(i=0;i<=10;i++){
        for(j=0;j<=10;j++){
            if(a[i][j]==0)
                printf(" ");
            if(a[i][j]==1){
                printf("*");
            }
        }
        printf("\n");
    }
    
    return 0;
}