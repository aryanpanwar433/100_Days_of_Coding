#include<stdio.h>
int main(){
    int cost_price, selling_price,profit,loss;
    printf("Enter cost_price and selling_price");
    scanf("%d%d",&cost_price,&selling_price);
    profit = selling_price - cost_price;
    loss = cost_price - selling_price;
    if(selling_price>cost_price){
        printf("profit %d%%\n",(profit*100)/cost_price);
    }else if(cost_price>selling_price){
        printf("loss %d%%\n",(loss*100)/cost_price);
    }
    return 0;
}