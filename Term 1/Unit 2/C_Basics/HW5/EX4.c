#include <stdio.h>
int main(){
    int r;
    printf("Enter the radius: ");
    scanf("%d",&r);
    float area=3.14*r*r;
    printf("Area= %.2f ",area);
}