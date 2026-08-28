#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,root_1,root_2,D;
    printf("enter value of a , b , c ");
    scanf("%f %f %f",&a ,&b ,&c);
    D = (b*b-4*a*c);
    if(D > 0){
        root_1 = (-b + sqrt(D))/(2*a);
        root_2 = (-b - sqrt(D))/(2*a);
            printf("the quadratic question have two roots and both are different");
        }else if (D = 0){
            root_1 = (-b + sqrt(D)/(2*a));
            root_2 = (-b + sqrt(D)/(2*a));
            printf("the quadratic question have two roots and both are same");
        }else if (D < 0){
            printf("the roots are imagenary");
        }else
        return 0;
    }