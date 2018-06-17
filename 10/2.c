#include<stdio.h>
int main(){
    FILE* fp = fopen("a.out","w");
    if(fp){
    char name[20];
    int score[4];
    scanf("%s %d %d %d %d",name,&score[0],&score[1],&score[2],&score[3]);
    fprintf(fp,"%s %d %d %d %d",name,score[0],score[1],score[2],score[3]);
    fclose(fp);
    }else{
        printf("error!");
    }
    return 0;
}