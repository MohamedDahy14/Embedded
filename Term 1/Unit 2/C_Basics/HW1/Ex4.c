#include <stdio.h>
int main(){
    double a,b,product;   
    printf("Enter two numbers: ");
    fflush (stdout);
    scanf("%lf",&a);
    fflush (stdin);
    scanf("%lf",&b);
    fflush (stdin);
    product = a * b;
    printf("Product: %f",product);
    fflush (stdout);
}