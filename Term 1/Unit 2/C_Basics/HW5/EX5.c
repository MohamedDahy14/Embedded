#include <stdio.h>

#define PI 3.14159265359

#define CIRCLE_AREA(radius) (PI * (radius) * (radius))

int main() {
    double radius;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    double area = CIRCLE_AREA(radius);
    printf("The area of the circle = %.2lf\n", area);
    return 0;
}
