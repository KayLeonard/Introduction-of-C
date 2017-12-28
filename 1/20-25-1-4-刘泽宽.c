#include <stdio.h>
int main(){
    float a=0;
    printf("Please input a float number:");
    scanf("%f",&a);
    printf("Output it with original format:%f\n",a);
    printf("Output it with the following format: right alignment, width 10, and the 3 reminder after float point: %10.3f\n",a);
    printf("Output it with the following format: left alignment, width 10, and the 2 reminder after float point: %-10.2f\n",a);
    system("pause");
    return 0;}
