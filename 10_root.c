#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2;

    printf("Enter a coefficients of X square \n");
    scanf("%lf", &a );
    printf("Enter b coefficients of X  \n");
    scanf("%lf", &b );
    printf("Enter c constant \n");
    scanf("%lf", &c);

    // Calculate the discriminant
    discriminant = (b*b) - (4*a*c);

    // Check the discriminant to determine the nature of roots
    if (discriminant > 0) {
        root1 = ((-b)+sqrt(discriminant))/(2 * a);
        root2 = ((-b)-sqrt(discriminant))/(2 * a);
        printf("Two real and distinct roots: root1 = %.2lf and root2 = %.2lf\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = root2 = (-b)/(2*a);
        printf("One real root (double root): root1 = root2 = %.2lf\n", root1);
    } else {
        double realPart = (-b)/(2*a);
        double imaginaryPart = sqrt(-discriminant)/(2*a);
        printf("Two complex roots: root1 = %.2lf + %.2lfi and root2 = %.2lf - %.2lfi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}
