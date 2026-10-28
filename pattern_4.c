#include<stdio.h>
int main(){
    int i , n , j;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=n; i>=1; i--){
        for(j=i; j<=n; j++){
            printf("%d",j);
        }
    printf("\n");
    }
    return 0;
} 