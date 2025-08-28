#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, result;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    result = (sqrt(a + b));
    printf("result: %d", result);
    return 0;
}