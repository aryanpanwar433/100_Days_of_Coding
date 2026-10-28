#include<stdio.h>
int main(){
    int n ,i;
    printf("enter number : ");
    scanf("%d",&n);
    printf("factor are : ");
    for( i=1;i<=n;i++){
        if(n%i==0){
            printf("%d\n",i);
        }
    }
    return 0;
}