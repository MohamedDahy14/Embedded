#include <stdio.h>
int main(){
    float num;
    printf("Enter a number :");
    fflush(stdout);

    scanf("%f",&num);
    fflush(stdin);
    if (num==0){
        printf("You entered a Zero");
        fflush(stdout);
    }else if (num>0){
        printf("%f is a Postive number",num);
        fflush(stdout);
    }else{
        printf("%f is a Negative number",num);
        fflush(stdout);
    }
}