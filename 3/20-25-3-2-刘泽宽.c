#include<stdio.h>
int main(){
    int q[3];
    int n[3];
    int i=0;
    double p[3];
    double w=0;

    for(i=0;i<=2;i++){
        scanf("%d %d",&n[i],&q[i]);
    }

    for(i=0;i<=2;i++){
        switch(n[i])
        {
            case 1:
                p[i]=2.98;
            break;

            case 2:
                p[i]=4.50;
            break;
            
            case 3:
                p[i]=9.98;
            break;

            case 4:
                p[i]=4.49;
            break;

            case 5:
                p[i]=6.87;
            break;
        }
    }

    w=p[0]*q[0]+p[1]*q[1]+p[2]*q[2];
    printf("%.2f",w);

    return 0;
}