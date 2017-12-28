#include<stdio.h>
int main(){
    float s[3][3];
    int a=0,b=0,i=0,j=0;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%f",&s[i][j]);
        }
    }
    scanf("%d",&a);
    scanf("%d",&b);

    printf("%.2f %.2f",(s[a][0]+s[a][1]+s[a][2])/3,(s[0][b]+s[1][b]+s[2][b])/3);

    return 0;
}