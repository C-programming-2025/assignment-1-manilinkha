#include <stdio.h>
int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    x = ((x += 2) * 3) - 10;
    printf("Result after increment by 2, multiply by 3, and subtract 10: %d\n", x);
    return 0;
}