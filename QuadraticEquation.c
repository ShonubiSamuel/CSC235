/**                     //Documentation
 * Name: Shonubi Samuel
 * Matric number: 222513
  * description:Write a program in C to solve a simple 
  *             quadratic equation (x2+y+c=0)
 */

#include <math.h>
#include <stdio.h>
int main() {
    double a, b, c;
    double discriminant;
    double root1, root2;
    double real_value, imag_value;
    printf("Enter coefficients a, b and c: \n");
    printf("a: ");
    scanf("%lf", &a);
    printf("b: ");
    scanf("%lf", &b);
    printf("c: ");
    scanf("%lf", &c);

    discriminant = b * b - 4 * a * c;

    // condition for real and different roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }

    // condition for real and equal roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 & root2 = %.2lf;", root1);
    }

    // if roots are not real
    else {
        real_value = -b / (2 * a);
        imag_value = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", real_value, imag_value, real_value, imag_value);
    }

    return 0;
} 
