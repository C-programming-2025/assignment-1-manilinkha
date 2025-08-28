#include <stdio.h>
int main()
{
    int a, b, c, sum;
    printf("enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    sum = (a * a) + (b * b) + (c * c);
    printf("the sum is: %d", sum);
    return 0;
}
