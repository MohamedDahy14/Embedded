#include <stdio.h>
struct distance{
    int feet;
    float inch;
};
int main(){
    struct distance one;
    printf("Enter information for 1st distance\n");
    printf("Enter feet: ");
    scanf("%d",&one.feet);
    printf("Enter inch: ");
    scanf("%f",&one.inch);

    struct distance two;
    printf("Enter information for 2nd distance\n");
    printf("Enter feet: ");
    scanf("%d",&two.feet);
    printf("Enter inch: ");
    scanf("%f",&two.inch);  
    int x,sum;
    float z,y;
    x=one.feet + two.feet;
    y=one.inch + two.inch;
    sum = x+(y/12);
    z=y -12;
    printf("Sum of distances= %d -%.1f ",sum,z);  
}