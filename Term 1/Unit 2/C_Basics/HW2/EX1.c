#include <stdio.h>
int main(){
        int num;
        printf("Enter an Integr you want to check: ");
        fflush (stdout);
        scanf("%d",&num);
        fflush(stdin);
        if (num%2==0){
            printf("%d is even",num);
            fflush(stdout);
        }else{
            printf("%d is odd",num);
            fflush(stdout);            
        }
}