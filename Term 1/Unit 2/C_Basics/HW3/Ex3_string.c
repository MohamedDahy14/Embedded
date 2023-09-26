#include <stdio.h>
int main(){
    char a[1000];
    char in ;
    int i=0,j=0;
    printf("Enter a string: ");
    fflush(stdout);fflush(stdin);
    gets(a);
    while(a[i]!='\0')
    {
    i++;
    }
    for(i;i>=0;i--){
        printf("%c",a[i]);
    }    
}