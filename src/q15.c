#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d is%s positive and even.\n", num, num > 0 && num % 2 == 0 ? "" : " NOT");
    return 0;
}