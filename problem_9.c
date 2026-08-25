#include<stdio.h>
#include<ctype.h>
int main(){
char vowel,consonant;
printf("enter a alphabet");
scanf("%c%c",&vowel,&consonant);
if(tolower(vowel)=='a'||tolower(vowel)=='e'||tolower(vowel)=='i'||tolower(vowel)=='o'||tolower(vowel)=='u'){
    printf("%c is  vowel",vowel);
}else{
    printf("it is  consonant");
}
return 0;
}