#include <stdio.h>
int main() {
    int days;
    printf("Enter number of days: ");
    scanf("%d", &days);
    printf("%d weeks and %d days\n", days / 7, days % 7);
    return 0;
}
