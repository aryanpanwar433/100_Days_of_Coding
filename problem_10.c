#include<stdio.h>
int main(){
    char CH;
    printf("Enter value =");
    scanf("%c",&CH);
    if(CH>='A' & CH<='Z'){
        printf("It is upercase");
    }else if(CH>='a' & CH<='z'){
        printf("It is lowercase");
    }else if(CH>='0' & CH<='9'){
        printf("It is digit");
    }else{
        printf("It is a special character");
    }
    return 0;
}

