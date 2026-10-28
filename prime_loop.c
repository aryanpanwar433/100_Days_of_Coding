#include<stdio.h>
int main(){
    int i,n;
    printf("enter number : ");
    scanf("%d",&n);
    for( int i=2;i<=n;i++){        
        if(n%i==0){
            printf("Number is not  prime number ");
            break;
        }
    }
    if(n<=1){
        printf("Number is not a prime number");
    }else if(i==n){
        printf("Number is a prime number");
    }
    return 0;
}