#include <stdio.h>
int main() {
    float num1, num2, num3, sum;
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("Enter third number: ");
    scanf("%f", &num3);
    (num1 == num2 || num2 == num3 || num1 == num3);
    printf("Sum of squares: %.2f\n", (num1*num1) + (num2*num2) + (num3*num3));
    return 0;
}
