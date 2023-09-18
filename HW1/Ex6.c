#include <stdio.h>
int main(){
    double a,b,temp;   
    printf("Enter value of a: ");
    scanf("%lf",&a);
    printf("Enter value of b: ");    
    scanf("%lf",&b);
    temp =a;
    a=b;
    b=temp;
    printf("After swapping, value of a =  %f\n",a);
    printf("After swapping, value of b =  %f",b);

}