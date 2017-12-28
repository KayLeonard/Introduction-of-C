#include<stdio.h>
#include<math.h>
int main(){
    int i=1;
    for(i=1;i<=10;i++)
    printf("%d\n",(int)pow(2,i));
    
    i=1;
    while(i<=10){
        printf("%d\n",(int)pow(2,i));
        i++;
        }
        
    i=1;
    do{
        printf("%d\n",(int)pow(2,i));
        i++;
        }while(i<=10);
        
    system("pause");
    return 0;
}
