#include <stdio.h>
int fact(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main(){
    int n,x;
    printf("Enter a postive integer: ");
    scanf("%d",&n);
    if(n<0){
        printf("It must be a postive number");
    }else{
        x= fact(n);
    }
    printf("Factorial of %d = %d",n,x);
    }