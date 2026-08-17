#include <stdio.h>
int main (){
    int a=3, b=5,temp;
    temp=a;
    a=b;
    b=temp;
    printf("after swap:%d%d",a,b);
    return 0;
}