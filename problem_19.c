#include<stdio.h>
int main(){
    int unit;
    printf("Enter units :");
    scanf("%d",&unit);
    if(unit>=1 && unit<=100){
        printf("Bill : Rs %d",unit*5);
    }else if(unit>=101 && unit<=200){
        printf("Bill : Rs %d",100*5 + (unit-100)*7);
    }else if(unit>=201 && unit<=300){
        printf("Bill : Rs %d",100*5 + 100*7 + (unit-200)*10);
    }else if(unit>=301){
        printf("Bill : Rs %d",100*5 + 100*7 + 100*10 + (unit-300)*12);
    }
    return 0;
}