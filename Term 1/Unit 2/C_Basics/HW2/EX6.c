#include <stdio.h>
int main(){
    int num,sum=0,n=0;
    printf("Enter an integer :");
    fflush(stdout);
    scanf("%d",&num);
    fflush(stdin);
    for(n;n<=num;n++){
        sum+=n;
    }
    printf("sum = %d",sum);
    fflush(stdout);
}