# include <stdio.h>
int main (){
    int num1,num2;
    printf("Enter two integers:");
    fflush (stdout);
    scanf("%d",&num1);
    fflush (stdin);
    scanf("%d",&num2);
    fflush (stdin);
    int sum =num1+num2;
    printf("Sum: %d",sum);
    fflush (stdout);
}