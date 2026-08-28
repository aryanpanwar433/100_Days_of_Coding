#include<stdio.h>
int main(){
    int a, b ,c;
    printf("Enter sides");
    scanf("%d %d %d",&a ,&b ,&c);
    if (a==b && b==c){
        printf("Eqilateral Triangle");
    }else if (a==b || b==c || c==a){
        printf("Isosceles Triangle");
    }else{
        printf("Scalen Triangle");
    }
    return 0;
}