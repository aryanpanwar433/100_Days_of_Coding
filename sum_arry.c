#include<stdio.h>
int main(){
    int i;
    int sum = 0;
    int weights , max = 0;
    printf("enter weights \n");

for(int i=0;i<5;i++){
    
    scanf("%d",&weights);
    if(i==0||weights>max){
        weights = max;
        sum +=weights;
    } 
}
    printf("sum =  %d",sum);
    printf("Max weight is : %d",max);
    return 0;
}
