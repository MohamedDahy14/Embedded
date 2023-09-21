#include <stdio.h>
int main(){
    double a,b;   
    printf("Enter value of a: ");
    fflush (stdout);
    scanf("%lf",&a);
    fflush (stdin);
    printf("Enter value of b: "); 
    fflush (stdout);   
    scanf("%lf",&b);
    fflush (stdin);
    a+=b;
    b=a-b;
    a=a-b;
    printf("After swapping, value of a =  %f\n",a);
    fflush (stdout);
    printf("After swapping, value of b =  %f",b);
    fflush (stdout);

}