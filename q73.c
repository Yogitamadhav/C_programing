#include <stdio.h>
#include <math.h>

double areaOfTriangle(double a, double b, double c) {

    double s = (a + b + c) / 2;

    double area = sqrt(s * (s - a) * (s - b) * (s - c));

    return area;
}

int main() {
    double a, b, c;

    printf("Enter the sides of the triangle:\n");
    printf("Side a: ");
    scanf("%lf", &a);
    printf("Side b: ");
    scanf("%lf", &b);
    printf("Side c: ");
    scanf("%lf", &c);

    if (a + b > c && b + c > a && a + c > b) {

        double area = areaOfTriangle(a, b, c);
        
        printf("The area of the triangle is: %.2lf\n", area);
    } else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}
