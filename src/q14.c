#include <stdio.h>
int main() {
    int x, y;
    printf("Enter value for x: ");
    scanf("%d", &x);
    printf("Enter value for y: ");
    scanf("%d", &y);
    printf("Before swap: x = %d, y = %d\n", x, y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("After swap: x = %d, y = %d\n", x, y);
    return 0;
}