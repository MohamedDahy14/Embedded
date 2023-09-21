#include <stdio.h>
int main(){
    double a,b,temp;   
    printf("Enter value of a: ");
    fflush (stdout);
    scanf("%lf",&a);
    fflush (stdin);
    printf("Enter value of b: "); 
    fflush (stdout);   
    scanf("%lf",&b);
    fflush (stdin);
    temp =a;
    a=b;
    b=temp;
    printf("After swapping, value of a =  %f\n",a);
    fflush (stdout);
    printf("After swapping, value of b =  %f",b);
    fflush (stdout);

}