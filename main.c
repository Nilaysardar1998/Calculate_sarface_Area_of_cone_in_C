#include <stdio.h>
#include <math.h>
int main() {
    float radius, height; double pie = 3.14;

    printf("\nEnter the Radius of Cone: ");
    scanf_s("%f", &radius);

    printf("\nEnter the Height of Cone: ");
    scanf_s("%f", &height);

    double surface_area =  pie * radius *(radius + sqrtf(height * height + radius * radius));
    printf("\nArea of Cone: %.2lf", surface_area);

    double volume = (1.0/3) * pie * radius * radius * height;
    printf("\nVolume of a Cone: %.2lf", volume);

    double curved_surface_area = pie * radius * height;
    printf("\nCurved Surface Area of Cone: %.2lf", curved_surface_area);

    return 0;
}
