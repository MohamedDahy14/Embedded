#include <stdio.h>
struct num
{
    float real,img;
};
int main(){
    struct num x;
    printf("Enter 1st real and imaginary respectively: ");
    scanf("%f %f",&x.real,&x.img);
    printf("Enter 2nd real and imaginary respectively: ");
    struct num y;
    scanf("%f %f",&y.real,&y.img);
    printf("Sum = %.2f + %.2fi",x.real+y.real,x.img+y.img);
    

}
