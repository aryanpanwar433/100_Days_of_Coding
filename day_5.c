#include<stdio.h>
#include<math.h>
int main(){
    float principal;
    float rate;
    float time;
    printf("enter principal amount");
    scanf("%f",&principal);
    printf("enter rate");
    scanf("%f",&rate);
    printf("enter time");
    scanf("%f",&time);
    printf("the value of compound interest is%.1f\n",principal*pow((1+rate/100),time)-principal);
    printf("the value of simple interestis%.1f\n",(principal*rate*time)/100);
    return 0;
}