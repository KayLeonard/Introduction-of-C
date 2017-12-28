#include<stdio.h>
#include<math.h>
int main(){
    int n=0,i=0;
    scanf("%d",&n);
    for(i=19;i<n;i++)
    {
        if(i/100+i%100/10+i%10==10)
            printf("%d\n",i);
    }
    return 0;
}