#include <stdio.h>
int main() {
    float x, y;
    printf("Enter value for x: ");
    scanf("%f", &x);
    printf("Enter value for y: ");
    scanf("%f", &y);
    float average = (x + y) / 2.0;
    printf("The average of %.2f and %.2f is %.2f\n", x, y, average);
    return 0;
}