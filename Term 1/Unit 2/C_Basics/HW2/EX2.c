#include<stdio.h>
int main(){
    char in;
    printf("Enter an Alphabet: ");
    fflush (stdout);
    scanf("%c",&in);
    fflush(stdin);
    if (in== 'a' ||in=='o'||in=='i'||in=='u' ||in=='e'){
        printf("%c is a vowel",in);
        fflush(stdout);
    }else {
        printf("%c is a consonant",in);
        fflush(stdout);        
    }   

}