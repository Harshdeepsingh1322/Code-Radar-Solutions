#include <stdio.h>

int main() {
    float radius, area;
    const float PI = 3.14; // Value of π as 3.14

    // Input the radius
    scanf("%f", &radius);

    // Calculate the area of the circle
    area = PI * radius * radius;

    // Output the area with two decimal places
    printf("Area: %.2f\n", area);

    return 0;
}
