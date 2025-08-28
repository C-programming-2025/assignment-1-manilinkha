#include <stdio.h>
#include <math.h>
int main() {
    int a, b;
    double sum, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    result = round(sqrt(sum));
    printf("Rounded square root of sum: %.0f\n", result);
    return 0;
}