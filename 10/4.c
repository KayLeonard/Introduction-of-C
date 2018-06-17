#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int a[10][10];
    memset(a,'0',100);
    int i=0,j=0,min=0,sum=0;

    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            srand(time(NULL)+i+10*j);
            a[i][j]=rand()%1000;
        }
    }

    min=a[0][0];

    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            sum+=a[i][j];
            if(min>a[i][j]){
                min=a[i][j];
            }
        }
    }
    
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }

    printf("avg: %f\nmin: %d",(float)sum/100,min);
    return 0;
}