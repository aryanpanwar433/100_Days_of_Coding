#include<stdio.h>
int main(){
    int i=0 , n;
    int sum = 0;
    printf("Enter number = ");
    scanf("%d",&n);
   /*for(i=0;i<n;i++){
        sum += 2*i + 1;
    } 
     printf("Sum of first n odd numbers %d\n", sum);*/
    /** while(i<n){
        sum +=2*i + 1;
        i++;
     }*/
     do{
        sum +=2*i + 1;
        i++; 
     }
     while(i<n);
      printf("Sum of first n odd numbers %d\n", sum);
    return 0;
}
