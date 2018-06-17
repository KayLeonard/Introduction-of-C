#include<stdio.h>
#include<math.h>
int main(){
    double a=0,b=0,c=0,d=0,x=0;
    
    printf("please enter a b c\n");
    scanf("%lf %lf %lf",&a,&b,&c);

    if(a==0){
        x=-c/b;
        printf("x=%g",x);
    }else{
        d=pow(b,2)-4*a*c;
        
        if(d<0){
            printf("no solutoin");
        }

        if(d==0){
            printf("x=%g",-b/2/a);
        }

        if(d>0){
            printf("x1=%g x2=%g",(-b+sqrt(d))/2/a,-b-sqrt(d)/2/a);
        }

    }
    return 0;
}