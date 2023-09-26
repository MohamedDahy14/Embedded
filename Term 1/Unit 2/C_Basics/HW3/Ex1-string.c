#include <stdio.h>
int main(){
    char a[1000];
    char in ;
    int i=0,j=0;
    printf("Enter a string: ");
    fflush(stdout);fflush(stdin);
    gets(a);
    printf("Enter a character to find the frequency:");
    fflush(stdout);fflush(stdin);
    scanf("%c",&in);
    while(a[i]!='\0')
    {
        if (a[i]==in)
        {
            j++;
        }
    i++;
    }
    printf("frequency of %c : %d",in,j);
}