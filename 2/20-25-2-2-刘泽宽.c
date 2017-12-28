#include<stdio.h>
int main(){
    int g;
    scanf("%d",&g);
    if(g < 0 || g > 100) printf("Error");
    else {
         if (g >= 60) printf("Passed");
         else printf("False");
         }
    system("pause");
    return 0;
}
