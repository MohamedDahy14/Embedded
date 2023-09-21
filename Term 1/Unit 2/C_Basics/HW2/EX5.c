#include <stdio.h>
int main(){
    char in;
    printf("Enter a character :");
    fflush(stdout);
    scanf("%c",&in);
    fflush(stdin);
    int x =in;
    if ((x<=90 && x>=65)||(x>=97 && x<=122)){
            printf("%c is an alphabet",in);
            fflush(stdout);    
    }else{
            printf("%c is not an alphabet",in);
            fflush(stdout);    
    }



}