#include <stdio.h>
int main(){
    double a,b;   
    printf("Enter value of a: ");
    scanf("%lf",&a);
    printf("Enter value of b: ");    
    scanf("%lf",&b);
    a+=b;
    b=a-b;
    a=a-b;
    printf("After swapping, value of a =  %f\n",a);
    printf("After swapping, value of b =  %f",b);

}