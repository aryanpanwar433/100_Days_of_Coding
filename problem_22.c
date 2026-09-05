 #include<stdio.h>
 int main(){
    int i=1,n;
    int sum = 0;
     printf("Enter number = ");
    scanf("%d",&n);
    while(i<=n){
        sum +=2*i;
        i++;
    }
    printf("Sum of n first even numbers=%d\n",sum);
    return 0;
 }