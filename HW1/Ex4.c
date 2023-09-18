#include <stdio.h>
int main(){
    double a,b,product;   
    printf("Enter two numbers: ");
    scanf("%lf",&a);
    scanf("%lf",&b);
    product = a * b;
    printf("Product: %f",product);
}