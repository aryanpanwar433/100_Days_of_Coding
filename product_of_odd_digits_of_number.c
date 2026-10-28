#include<stdio.h>

int main(){

    int n , reminder , sum = 0;
    printf("Enter the number : ");
    scanf("%d",&n);

    while(n>0){
        reminder = n%10;
        if(reminder%2 != 0){
            sum = sum + reminder;
        }
        n = n/10;
    }
    printf("Sum of odd digits of number : %d",sum);

    return 0;
}

