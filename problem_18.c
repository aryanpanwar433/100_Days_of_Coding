#include<stdio.h>
int main(){
    int days;
    printf("Enter dwys = ");
    scanf("%d",&days);
    if(days>=1 && days<=5){
        printf("Fine Rs %d",days*2);
    }else if(days>=6 && days<=10){
        printf("Fine Rs %d",5*2 + (days - 5)*4);
    }else if (days>=11 && days<=30){
        printf("Fine Rs %d",5*2 + 5*4 + (days - 10)*6);
    }else if (days>=31){
        printf("Membership cancelled");
    }
    return 0;
}
