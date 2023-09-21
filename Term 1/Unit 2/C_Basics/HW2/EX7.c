#include <stdio.h>
int main(){
    int num,product=1,n=1;
    printf("Enter an integer :");
    fflush(stdout);
    scanf("%d",&num);
    fflush(stdin);
    if (num<0){
        printf("Error!!! a factorial of a negative number does not exist");
        fflush(stdout);

    }else if (num ==0){
        printf("factorial of zero = 1");
        fflush(stdout);
    }
    else{
            for(n;n<=num;n++){
                product*=n;
            }
            printf("sum = %d",product);
            fflush(stdout);
    }    
}