#include <stdio.h>
#include <math.h>

int main() {
    double radius, volume;
    const double pi = 3.14159;
    printf("Enter the radius of the sphere: ");
    scanf("%lf", &radius);
    volume = (4.0 / 3.0) * pi * pow(radius, 3);
    printf("VOLUME = %.3f\n", radius, volume);

    return 0;
}
