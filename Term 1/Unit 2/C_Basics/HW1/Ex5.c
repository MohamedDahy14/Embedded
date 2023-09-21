#include <stdio.h>
int main(){
    char character;
    printf("Enter a character: ");
    fflush (stdout);
    scanf("%c",&character);
    fflush (stdin);
    printf("ASCII value of G = %d",character);
    fflush (stdout);
}