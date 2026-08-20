#include<stdio.h>
int main (){
    int hour,minutes,second;
    int total_second;
    printf("total_second=");
    scanf("%d",&total_second);
    printf("the time in hour,minutes,second is %d:%d:%d",total_second/3600,(total_second%3600)/60,total_second%60);
    return 0;
}