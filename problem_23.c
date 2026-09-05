#include<stdio.h>
 int main(){
    int i=1,n;
   int product = 1;
    printf("Enter numbers");
    scanf("%d",&n);
    while(i<=n){
        if(i==1 && i==0){
            printf("the factorial is 1!/n");
        }
      product *=i;
      i++;
    }
    printf("The factorial of number =%d",product);
    return 0;
}