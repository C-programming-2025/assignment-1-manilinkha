#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int is_Multiple = ((num / 3) * 3 == num) | ((num / 5) * 5 == num);
    printf("%d %s\n", num, is_Multiple ? "is a multiple of 3 or 5." : "is not a multiple.");

    return 0;
}