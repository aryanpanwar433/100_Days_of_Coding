#include<stdio.h>
int main(){
    int marks;
    char grade;
    printf("enter marks");
    scanf("%d",&marks);
    if (marks<=100 && marks>=90){
        printf("Grade A");
    }else if (marks<=89 && marks>=80){
        printf("Grade B");
    }else if (marks<=79 && marks>=70){
        printf("Grade C");
    }else if (marks<=69 && marks>=60){
        printf("Grade D");
    }else if (marks<=59){
        printf("Grade F" );
    }else
    return 0;
}