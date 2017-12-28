#include<stdio.h>
#include<string.h>

int main(){
    char a[100];
    gets(a);
    printf("%d",strlen(a)-1);
    return 0;
}
int main()
{
    int lettercount(char*);
     
    char string[32767];
    scanf("%s",string);
    int letter;
    letter = lettercount(string);
    printf("%d",letter);
    return 0;
}
 
int lettercount(char str[])
{
    int num = 0;
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] < '0' || str[i] > '9')
            num ++;
        i++;
    }
     
    return num;
}