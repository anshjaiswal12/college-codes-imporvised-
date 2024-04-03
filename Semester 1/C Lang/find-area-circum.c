#include <stdio.h>

void calculateCircleProperties(float r, float *area, float *circum, float *dia) {
    if (r < 0) {
        printf("Radius cannot be negative.\n");
        return;
    }

    *area = 3.14 * r * r;
    *circum = 2 * 3.14 * r;
    *dia = 2 * r;
}

int main() {
    float r, area, circum, dia;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    
    calculateCircleProperties(r, &area, &circum, &dia);

    printf("Area of the circle = %f\n", area);
    printf("Circumference of the circle = %f\n", circum);
    printf("Diameter of the circle = %f\n", dia);

    return 0;
}
