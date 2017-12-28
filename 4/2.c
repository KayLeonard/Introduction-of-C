#include<stdio.h>
#include<math.h>
int main(){
    int n=0,i=0;
    float pi=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        pi+=4.0/(2*i-1)*pow(-1,i+1);
    }
    printf("%6.5f",pi);
    return 0;
}