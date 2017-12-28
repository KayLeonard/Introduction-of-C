#include<stdio.h>
int main(){
    int i=2,sum=0;
    while(i<=30)
    {sum+=i;
    i+=2;
    }
    printf("%d\n",sum);
    
    sum=0;
    for(i=2;i<=30;i+=2)
    sum+=i;
    printf("%d\n",sum);
    
    system("pause");
    return 0;
}
