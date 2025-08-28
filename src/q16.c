#include <stdio.h>
int main()
{
    float a, b, avg;
    printf("enter two numbers: ");
    scanf("%f %f", &a, &b);
    avg = (a + b) / 2;
    printf("the average is %.2f", avg);
    return 0;
}