#include<stdio.h>
int main(){
    int i=0,j=0,s=0;
    
    scanf("%d",&s);

    int a[2*s-1][2*s-1];

    for(i=0;i<2*s-1;i++){
        for(j=0;j<2*s-1;j++){
            a[i][j]=0;
        }
    }

    for(i=0;i<2*s-1;i++){
        for(j=0;j<2*s-1;j++){
            if(j>=-i+s-1&&j<=i+s-1&&j>=i-s+1&&j<=-i+3*(s-1)){
                a[i][j]=1;          
            }
        }
    }

    for(i=0;i<2*s-1;i++){
        for(j=0;j<2*s-1;j++){
            if(a[i][j]==1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}