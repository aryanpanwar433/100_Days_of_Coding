#include<stdio.h>
int main(){
    int number;
    printf("Enter number :");
    scanf("%d",&number);
    if(number>0){
        printf("%d is positive",number);
    }if(number<0){
        printf("%d is negative",number);
    }else{
        printf("%d",number);
    }
    return 0;
}
