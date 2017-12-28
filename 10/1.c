#include<stdio.h>
int strCount(char *);
void strCopy(char *,char *);
void strCat(char *,char *);
int main(){
    char str1[40],str2[20];
    gets(str1);
    gets(str2);

    printf("str1 is ");
    puts(str1);
    printf("str2 is ");
    puts(str2);

    printf("lenth of str1 is %d\n",strCount(str1));
    
    strCopy(str1,str2);
    printf("Now, str1 is ");
    puts(str1);

    strCat(str1,str2);
    printf("Now, str1 is %s",str1);

    return 0;
}

int strCount(char a[]){
    int l=0;
    for(l=0;a[l]!=0;l++);
    return l;
}

void strCopy(char s1[],char s2[]){
    int i=0;
    for(i=0;s2[i]!=0;i++){
        s1[i]=s2[i];
    }
    s1[i]=0;
}

void strCat(char s1[],char s2[]){
    int i=0,l=0;
    l=strCount(s1);
    for(i=0;s2[i]!=0;i++){
        s1[l+i]=s2[i];
    }
    s2[l+i]=0;
}