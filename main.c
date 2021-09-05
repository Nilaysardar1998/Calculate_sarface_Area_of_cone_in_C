#include <stdio.h>
#include <math.h>
int main() {
    float radius, height; double pie = 3.14;

    printf("\nEnter the Radius of Cone: ");
    scanf_s("%f", &radius);

    printf("\nEnter the Height of Cone: ");
    scanf_s("%f", &height);

    double surface_area =  pie * radius *(radius + sqrtf(radius * radius + height * height));
    printf("\nArea of Cone: %.2lf", surface_area);
    return 0;
}
