#include <stdio.h>
int main() {
    int a;
    printf("Enter any number:");
    scanf("%d", &a);
    printf("%d is%s divisible by 2 and 3.\n", a, a % 2 == 0 && a % 3 == 0 ? "" : " not");
    return 0;
}
