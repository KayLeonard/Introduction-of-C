#include<stdio.h>
#include<string.h>
int main(){
    char a[300],b[300];
    scanf("%s",a);
    scanf("%s",b);
    int i=strlen(a);
    int j=strlen(b);
    printf("%d %d\n",i,j);
    puts(strcat(a,b));
    return 0;
}