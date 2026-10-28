#include<stdio.h>
int main(){
    int n , number = 0 , r,temp ;
    printf("Enter numder : ");
    scanf("%d",&n);
    temp = n;
while(n>0){
    r = n %10;
    number = number + r*r*r;
    n = n/10;
}
if(temp == number )
    printf("Armstrong Number");
else
    printf("Not Armstrong Number");

return 0;

}