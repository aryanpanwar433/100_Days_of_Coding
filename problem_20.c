#include<stdio.h>
int main(){
    int i=0 , n;
    printf("Enter number = ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%d\n",i+1);
    }
    return 0;
}