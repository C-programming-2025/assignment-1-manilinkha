#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Enter value of y: ");
    scanf("%d", &y);
    printf("B4 swap: x = %d, y = %d\n", x, y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("After swap: x = %d, y = %d\n", x, y);
    return 0;
}