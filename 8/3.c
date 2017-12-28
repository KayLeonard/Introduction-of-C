#include<stdio.h>
#include<string.h>
int main(){
    int l=0,i=0;
    char a[100];
    gets(a);
    l=strlen(a);
    puts(a);
    for(i=l-1;i>=0;i--){
        printf("%c",a[i]);
    }
    printf("\n");
    return 0;
}